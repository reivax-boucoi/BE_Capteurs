/*******************************************************************************
* File Name: LDR_bis.h  
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

#if !defined(CY_PINS_LDR_bis_H) /* Pins LDR_bis_H */
#define CY_PINS_LDR_bis_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "LDR_bis_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 LDR_bis__PORT == 15 && ((LDR_bis__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    LDR_bis_Write(uint8 value);
void    LDR_bis_SetDriveMode(uint8 mode);
uint8   LDR_bis_ReadDataReg(void);
uint8   LDR_bis_Read(void);
void    LDR_bis_SetInterruptMode(uint16 position, uint16 mode);
uint8   LDR_bis_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the LDR_bis_SetDriveMode() function.
     *  @{
     */
        #define LDR_bis_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define LDR_bis_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define LDR_bis_DM_RES_UP          PIN_DM_RES_UP
        #define LDR_bis_DM_RES_DWN         PIN_DM_RES_DWN
        #define LDR_bis_DM_OD_LO           PIN_DM_OD_LO
        #define LDR_bis_DM_OD_HI           PIN_DM_OD_HI
        #define LDR_bis_DM_STRONG          PIN_DM_STRONG
        #define LDR_bis_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define LDR_bis_MASK               LDR_bis__MASK
#define LDR_bis_SHIFT              LDR_bis__SHIFT
#define LDR_bis_WIDTH              1u

/* Interrupt constants */
#if defined(LDR_bis__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in LDR_bis_SetInterruptMode() function.
     *  @{
     */
        #define LDR_bis_INTR_NONE      (uint16)(0x0000u)
        #define LDR_bis_INTR_RISING    (uint16)(0x0001u)
        #define LDR_bis_INTR_FALLING   (uint16)(0x0002u)
        #define LDR_bis_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define LDR_bis_INTR_MASK      (0x01u) 
#endif /* (LDR_bis__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define LDR_bis_PS                     (* (reg8 *) LDR_bis__PS)
/* Data Register */
#define LDR_bis_DR                     (* (reg8 *) LDR_bis__DR)
/* Port Number */
#define LDR_bis_PRT_NUM                (* (reg8 *) LDR_bis__PRT) 
/* Connect to Analog Globals */                                                  
#define LDR_bis_AG                     (* (reg8 *) LDR_bis__AG)                       
/* Analog MUX bux enable */
#define LDR_bis_AMUX                   (* (reg8 *) LDR_bis__AMUX) 
/* Bidirectional Enable */                                                        
#define LDR_bis_BIE                    (* (reg8 *) LDR_bis__BIE)
/* Bit-mask for Aliased Register Access */
#define LDR_bis_BIT_MASK               (* (reg8 *) LDR_bis__BIT_MASK)
/* Bypass Enable */
#define LDR_bis_BYP                    (* (reg8 *) LDR_bis__BYP)
/* Port wide control signals */                                                   
#define LDR_bis_CTL                    (* (reg8 *) LDR_bis__CTL)
/* Drive Modes */
#define LDR_bis_DM0                    (* (reg8 *) LDR_bis__DM0) 
#define LDR_bis_DM1                    (* (reg8 *) LDR_bis__DM1)
#define LDR_bis_DM2                    (* (reg8 *) LDR_bis__DM2) 
/* Input Buffer Disable Override */
#define LDR_bis_INP_DIS                (* (reg8 *) LDR_bis__INP_DIS)
/* LCD Common or Segment Drive */
#define LDR_bis_LCD_COM_SEG            (* (reg8 *) LDR_bis__LCD_COM_SEG)
/* Enable Segment LCD */
#define LDR_bis_LCD_EN                 (* (reg8 *) LDR_bis__LCD_EN)
/* Slew Rate Control */
#define LDR_bis_SLW                    (* (reg8 *) LDR_bis__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define LDR_bis_PRTDSI__CAPS_SEL       (* (reg8 *) LDR_bis__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define LDR_bis_PRTDSI__DBL_SYNC_IN    (* (reg8 *) LDR_bis__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define LDR_bis_PRTDSI__OE_SEL0        (* (reg8 *) LDR_bis__PRTDSI__OE_SEL0) 
#define LDR_bis_PRTDSI__OE_SEL1        (* (reg8 *) LDR_bis__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define LDR_bis_PRTDSI__OUT_SEL0       (* (reg8 *) LDR_bis__PRTDSI__OUT_SEL0) 
#define LDR_bis_PRTDSI__OUT_SEL1       (* (reg8 *) LDR_bis__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define LDR_bis_PRTDSI__SYNC_OUT       (* (reg8 *) LDR_bis__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(LDR_bis__SIO_CFG)
    #define LDR_bis_SIO_HYST_EN        (* (reg8 *) LDR_bis__SIO_HYST_EN)
    #define LDR_bis_SIO_REG_HIFREQ     (* (reg8 *) LDR_bis__SIO_REG_HIFREQ)
    #define LDR_bis_SIO_CFG            (* (reg8 *) LDR_bis__SIO_CFG)
    #define LDR_bis_SIO_DIFF           (* (reg8 *) LDR_bis__SIO_DIFF)
#endif /* (LDR_bis__SIO_CFG) */

/* Interrupt Registers */
#if defined(LDR_bis__INTSTAT)
    #define LDR_bis_INTSTAT            (* (reg8 *) LDR_bis__INTSTAT)
    #define LDR_bis_SNAP               (* (reg8 *) LDR_bis__SNAP)
    
	#define LDR_bis_0_INTTYPE_REG 		(* (reg8 *) LDR_bis__0__INTTYPE)
#endif /* (LDR_bis__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_LDR_bis_H */


/* [] END OF FILE */
