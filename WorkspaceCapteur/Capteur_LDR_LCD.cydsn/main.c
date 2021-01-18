/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include <stdio.h>

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    IDAC8_Start();
    
    int16 result1 = 0u;
    int16 result2 = 0u;
    char resultStr1[16u];
    char resultStr2[16u];
    
    /* Start of all components */
    LCD_Start();
    LCD_ClearDisplay();

    ADC_SAR_Seq_Start();
    ADC_SAR_Seq_StartConvert();

    
    for(;;) {   
        ADC_SAR_Seq_IsEndConversion(ADC_SAR_Seq_WAIT_FOR_RESULT);
        result1 = ADC_SAR_Seq_GetResult16(0u);
        result2 = ADC_SAR_Seq_GetResult16(1u);
        
        LCD_ClearDisplay();
        LCD_Position(0u,0u); 
        LCD_PrintString("C1");
        sprintf((char *)resultStr1," %d",result1);
        LCD_PrintString(resultStr1);
        
        LCD_Position(1u,0u); 
        LCD_PrintString("C2");
        sprintf((char *)resultStr2," %d",result2);
        LCD_PrintString(resultStr2);
        
        Control_Reg_1_Write(result1>>8);
        
        
        CyDelay(100u);
        
    }
}

/* [] END OF FILE */
