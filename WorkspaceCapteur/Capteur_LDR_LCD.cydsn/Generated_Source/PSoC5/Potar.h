/*******************************************************************************
* File Name: Potar.h  
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

#if !defined(CY_PINS_Potar_H) /* Pins Potar_H */
#define CY_PINS_Potar_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Potar_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Potar__PORT == 15 && ((Potar__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Potar_Write(uint8 value);
void    Potar_SetDriveMode(uint8 mode);
uint8   Potar_ReadDataReg(void);
uint8   Potar_Read(void);
void    Potar_SetInterruptMode(uint16 position, uint16 mode);
uint8   Potar_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Potar_SetDriveMode() function.
     *  @{
     */
        #define Potar_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Potar_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Potar_DM_RES_UP          PIN_DM_RES_UP
        #define Potar_DM_RES_DWN         PIN_DM_RES_DWN
        #define Potar_DM_OD_LO           PIN_DM_OD_LO
        #define Potar_DM_OD_HI           PIN_DM_OD_HI
        #define Potar_DM_STRONG          PIN_DM_STRONG
        #define Potar_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Potar_MASK               Potar__MASK
#define Potar_SHIFT              Potar__SHIFT
#define Potar_WIDTH              1u

/* Interrupt constants */
#if defined(Potar__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Potar_SetInterruptMode() function.
     *  @{
     */
        #define Potar_INTR_NONE      (uint16)(0x0000u)
        #define Potar_INTR_RISING    (uint16)(0x0001u)
        #define Potar_INTR_FALLING   (uint16)(0x0002u)
        #define Potar_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Potar_INTR_MASK      (0x01u) 
#endif /* (Potar__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Potar_PS                     (* (reg8 *) Potar__PS)
/* Data Register */
#define Potar_DR                     (* (reg8 *) Potar__DR)
/* Port Number */
#define Potar_PRT_NUM                (* (reg8 *) Potar__PRT) 
/* Connect to Analog Globals */                                                  
#define Potar_AG                     (* (reg8 *) Potar__AG)                       
/* Analog MUX bux enable */
#define Potar_AMUX                   (* (reg8 *) Potar__AMUX) 
/* Bidirectional Enable */                                                        
#define Potar_BIE                    (* (reg8 *) Potar__BIE)
/* Bit-mask for Aliased Register Access */
#define Potar_BIT_MASK               (* (reg8 *) Potar__BIT_MASK)
/* Bypass Enable */
#define Potar_BYP                    (* (reg8 *) Potar__BYP)
/* Port wide control signals */                                                   
#define Potar_CTL                    (* (reg8 *) Potar__CTL)
/* Drive Modes */
#define Potar_DM0                    (* (reg8 *) Potar__DM0) 
#define Potar_DM1                    (* (reg8 *) Potar__DM1)
#define Potar_DM2                    (* (reg8 *) Potar__DM2) 
/* Input Buffer Disable Override */
#define Potar_INP_DIS                (* (reg8 *) Potar__INP_DIS)
/* LCD Common or Segment Drive */
#define Potar_LCD_COM_SEG            (* (reg8 *) Potar__LCD_COM_SEG)
/* Enable Segment LCD */
#define Potar_LCD_EN                 (* (reg8 *) Potar__LCD_EN)
/* Slew Rate Control */
#define Potar_SLW                    (* (reg8 *) Potar__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Potar_PRTDSI__CAPS_SEL       (* (reg8 *) Potar__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Potar_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Potar__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Potar_PRTDSI__OE_SEL0        (* (reg8 *) Potar__PRTDSI__OE_SEL0) 
#define Potar_PRTDSI__OE_SEL1        (* (reg8 *) Potar__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Potar_PRTDSI__OUT_SEL0       (* (reg8 *) Potar__PRTDSI__OUT_SEL0) 
#define Potar_PRTDSI__OUT_SEL1       (* (reg8 *) Potar__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Potar_PRTDSI__SYNC_OUT       (* (reg8 *) Potar__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Potar__SIO_CFG)
    #define Potar_SIO_HYST_EN        (* (reg8 *) Potar__SIO_HYST_EN)
    #define Potar_SIO_REG_HIFREQ     (* (reg8 *) Potar__SIO_REG_HIFREQ)
    #define Potar_SIO_CFG            (* (reg8 *) Potar__SIO_CFG)
    #define Potar_SIO_DIFF           (* (reg8 *) Potar__SIO_DIFF)
#endif /* (Potar__SIO_CFG) */

/* Interrupt Registers */
#if defined(Potar__INTSTAT)
    #define Potar_INTSTAT            (* (reg8 *) Potar__INTSTAT)
    #define Potar_SNAP               (* (reg8 *) Potar__SNAP)
    
	#define Potar_0_INTTYPE_REG 		(* (reg8 *) Potar__0__INTTYPE)
#endif /* (Potar__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Potar_H */


/* [] END OF FILE */
