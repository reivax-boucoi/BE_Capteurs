/*******************************************************************************
* File Name: LDR.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_LDR_H) /* Pins LDR_H */
#define CY_PINS_LDR_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "LDR_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 LDR__PORT == 15 && ((LDR__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    LDR_Write(uint8 value);
void    LDR_SetDriveMode(uint8 mode);
uint8   LDR_ReadDataReg(void);
uint8   LDR_Read(void);
void    LDR_SetInterruptMode(uint16 position, uint16 mode);
uint8   LDR_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the LDR_SetDriveMode() function.
     *  @{
     */
        #define LDR_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define LDR_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define LDR_DM_RES_UP          PIN_DM_RES_UP
        #define LDR_DM_RES_DWN         PIN_DM_RES_DWN
        #define LDR_DM_OD_LO           PIN_DM_OD_LO
        #define LDR_DM_OD_HI           PIN_DM_OD_HI
        #define LDR_DM_STRONG          PIN_DM_STRONG
        #define LDR_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define LDR_MASK               LDR__MASK
#define LDR_SHIFT              LDR__SHIFT
#define LDR_WIDTH              1u

/* Interrupt constants */
#if defined(LDR__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in LDR_SetInterruptMode() function.
     *  @{
     */
        #define LDR_INTR_NONE      (uint16)(0x0000u)
        #define LDR_INTR_RISING    (uint16)(0x0001u)
        #define LDR_INTR_FALLING   (uint16)(0x0002u)
        #define LDR_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define LDR_INTR_MASK      (0x01u) 
#endif /* (LDR__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define LDR_PS                     (* (reg8 *) LDR__PS)
/* Data Register */
#define LDR_DR                     (* (reg8 *) LDR__DR)
/* Port Number */
#define LDR_PRT_NUM                (* (reg8 *) LDR__PRT) 
/* Connect to Analog Globals */                                                  
#define LDR_AG                     (* (reg8 *) LDR__AG)                       
/* Analog MUX bux enable */
#define LDR_AMUX                   (* (reg8 *) LDR__AMUX) 
/* Bidirectional Enable */                                                        
#define LDR_BIE                    (* (reg8 *) LDR__BIE)
/* Bit-mask for Aliased Register Access */
#define LDR_BIT_MASK               (* (reg8 *) LDR__BIT_MASK)
/* Bypass Enable */
#define LDR_BYP                    (* (reg8 *) LDR__BYP)
/* Port wide control signals */                                                   
#define LDR_CTL                    (* (reg8 *) LDR__CTL)
/* Drive Modes */
#define LDR_DM0                    (* (reg8 *) LDR__DM0) 
#define LDR_DM1                    (* (reg8 *) LDR__DM1)
#define LDR_DM2                    (* (reg8 *) LDR__DM2) 
/* Input Buffer Disable Override */
#define LDR_INP_DIS                (* (reg8 *) LDR__INP_DIS)
/* LCD Common or Segment Drive */
#define LDR_LCD_COM_SEG            (* (reg8 *) LDR__LCD_COM_SEG)
/* Enable Segment LCD */
#define LDR_LCD_EN                 (* (reg8 *) LDR__LCD_EN)
/* Slew Rate Control */
#define LDR_SLW                    (* (reg8 *) LDR__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define LDR_PRTDSI__CAPS_SEL       (* (reg8 *) LDR__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define LDR_PRTDSI__DBL_SYNC_IN    (* (reg8 *) LDR__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define LDR_PRTDSI__OE_SEL0        (* (reg8 *) LDR__PRTDSI__OE_SEL0) 
#define LDR_PRTDSI__OE_SEL1        (* (reg8 *) LDR__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define LDR_PRTDSI__OUT_SEL0       (* (reg8 *) LDR__PRTDSI__OUT_SEL0) 
#define LDR_PRTDSI__OUT_SEL1       (* (reg8 *) LDR__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define LDR_PRTDSI__SYNC_OUT       (* (reg8 *) LDR__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(LDR__SIO_CFG)
    #define LDR_SIO_HYST_EN        (* (reg8 *) LDR__SIO_HYST_EN)
    #define LDR_SIO_REG_HIFREQ     (* (reg8 *) LDR__SIO_REG_HIFREQ)
    #define LDR_SIO_CFG            (* (reg8 *) LDR__SIO_CFG)
    #define LDR_SIO_DIFF           (* (reg8 *) LDR__SIO_DIFF)
#endif /* (LDR__SIO_CFG) */

/* Interrupt Registers */
#if defined(LDR__INTSTAT)
    #define LDR_INTSTAT            (* (reg8 *) LDR__INTSTAT)
    #define LDR_SNAP               (* (reg8 *) LDR__SNAP)
    
	#define LDR_0_INTTYPE_REG 		(* (reg8 *) LDR__0__INTTYPE)
#endif /* (LDR__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_LDR_H */


/* [] END OF FILE */
