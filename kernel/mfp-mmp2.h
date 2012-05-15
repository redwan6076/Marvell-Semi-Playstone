#ifndef __ASM_MACH_MFP_MMP2_H
#define __ASM_MACH_MFP_MMP2_H

#include <mach/mfp.h>

#define MFP_DRIVE_VERY_SLOW	(0x0 << 13)
#define MFP_DRIVE_SLOW		(0x2 << 13)
#define MFP_DRIVE_MEDIUM	(0x4 << 13)
#define MFP_DRIVE_FAST		(0x6 << 13)

/* GPIO */
#define GPIO0_GPIO0		MFP_CFG(GPIO0, AF0)
#define GPIO1_GPIO1		MFP_CFG(GPIO1, AF0)
#define GPIO2_GPIO2		MFP_CFG(GPIO2, AF0)
#define GPIO3_GPIO3		MFP_CFG(GPIO3, AF0)
#define GPIO4_GPIO4		MFP_CFG(GPIO4, AF0)
#define GPIO5_GPIO5		MFP_CFG(GPIO5, AF0)
#define GPIO6_GPIO6		MFP_CFG(GPIO6, AF0)
#define GPIO7_GPIO7		MFP_CFG(GPIO7, AF0)
#define GPIO8_GPIO8		MFP_CFG(GPIO8, AF0)
#define GPIO9_GPIO9		MFP_CFG(GPIO9, AF0)
#define GPIO10_GPIO10		MFP_CFG(GPIO10, AF0)
#define GPIO11_GPIO11		MFP_CFG(GPIO11, AF0)
#define GPIO12_GPIO12		MFP_CFG(GPIO12, AF0)
#define GPIO13_GPIO13		MFP_CFG(GPIO13, AF0)
#define GPIO14_GPIO14		MFP_CFG(GPIO14, AF0)
#define GPIO15_GPIO15		MFP_CFG(GPIO15, AF0)
#define GPIO16_GPIO16		MFP_CFG(GPIO16, AF0)
#define GPIO17_GPIO17		MFP_CFG(GPIO17, AF0)
#define GPIO18_GPIO18		MFP_CFG(GPIO18, AF0)
#define GPIO19_GPIO19		MFP_CFG(GPIO19, AF0)
#define GPIO20_GPIO20		MFP_CFG(GPIO20, AF0)
#define GPIO21_GPIO21		MFP_CFG(GPIO21, AF0)
#define GPIO22_GPIO22		MFP_CFG(GPIO22, AF0)
#define GPIO23_GPIO23		MFP_CFG(GPIO23, AF0)
#define GPIO24_GPIO24		MFP_CFG(GPIO24, AF0)
#define GPIO25_GPIO25		MFP_CFG(GPIO25, AF0)
#define GPIO26_GPIO26		MFP_CFG(GPIO26, AF0)
#define GPIO27_GPIO27		MFP_CFG(GPIO27, AF0)
#define GPIO28_GPIO28		MFP_CFG(GPIO28, AF0)
#define GPIO29_GPIO29		MFP_CFG(GPIO29, AF0)
#define GPIO30_GPIO30		MFP_CFG(GPIO30, AF0)
#define GPIO31_GPIO31		MFP_CFG(GPIO31, AF0)
#define GPIO32_GPIO32		MFP_CFG(GPIO32, AF0)
#define GPIO33_GPIO33		MFP_CFG(GPIO33, AF0)
#define GPIO34_GPIO34		MFP_CFG(GPIO34, AF0)
#define GPIO35_GPIO35		MFP_CFG(GPIO35, AF0)
#define GPIO36_GPIO36		MFP_CFG(GPIO36, AF0)
#define GPIO37_GPIO37		MFP_CFG(GPIO37, AF0)
#define GPIO38_GPIO38		MFP_CFG(GPIO38, AF0)
#define GPIO39_GPIO39		MFP_CFG(GPIO39, AF0)
#define GPIO40_GPIO40		MFP_CFG(GPIO40, AF0)
#define GPIO41_GPIO41		MFP_CFG(GPIO41, AF0)
#define GPIO42_GPIO42		MFP_CFG(GPIO42, AF0)
#define GPIO43_GPIO43		MFP_CFG(GPIO43, AF0)
#define GPIO44_GPIO44		MFP_CFG(GPIO44, AF0)
#define GPIO45_GPIO45		MFP_CFG(GPIO45, AF0)
#define GPIO46_GPIO46		MFP_CFG(GPIO46, AF0)
#define GPIO47_GPIO47		MFP_CFG(GPIO47, AF0)
#define GPIO48_GPIO48		MFP_CFG(GPIO48, AF0)
#define GPIO49_GPIO49		MFP_CFG(GPIO49, AF0)
#define GPIO50_GPIO50		MFP_CFG(GPIO50, AF0)
#define GPIO51_GPIO51		MFP_CFG(GPIO51, AF0)
#define GPIO52_GPIO52		MFP_CFG(GPIO52, AF0)
#define GPIO53_GPIO53		MFP_CFG(GPIO53, AF0)
#define GPIO54_GPIO54		MFP_CFG(GPIO54, AF0)
#define GPIO55_GPIO55		MFP_CFG(GPIO55, AF0)
#define GPIO56_GPIO56		MFP_CFG(GPIO56, AF0)
#define GPIO57_GPIO57		MFP_CFG(GPIO57, AF0)
#define GPIO58_GPIO58		MFP_CFG(GPIO58, AF0)
#define GPIO59_GPIO59		MFP_CFG(GPIO59, AF0)
#define GPIO60_GPIO60		MFP_CFG(GPIO60, AF0)
#define GPIO61_GPIO61		MFP_CFG(GPIO61, AF0)
#define GPIO62_GPIO62		MFP_CFG(GPIO62, AF0)
#define GPIO63_GPIO63		MFP_CFG(GPIO63, AF0)
#define GPIO64_GPIO64		MFP_CFG(GPIO64, AF0)
#define GPIO65_GPIO65		MFP_CFG(GPIO65, AF0)
#define GPIO66_GPIO66		MFP_CFG(GPIO66, AF0)
#define GPIO67_GPIO67		MFP_CFG(GPIO67, AF0)
#define GPIO68_GPIO68		MFP_CFG(GPIO68, AF0)
#define GPIO69_GPIO69		MFP_CFG(GPIO69, AF0)
#define GPIO70_GPIO70		MFP_CFG(GPIO70, AF0)
#define GPIO71_GPIO71		MFP_CFG(GPIO71, AF0)
#define GPIO72_GPIO72		MFP_CFG(GPIO72, AF0)
#define GPIO73_GPIO73		MFP_CFG(GPIO73, AF0)
#define GPIO74_GPIO74		MFP_CFG(GPIO74, AF0)
#define GPIO75_GPIO75		MFP_CFG(GPIO75, AF0)
#define GPIO76_GPIO76		MFP_CFG(GPIO76, AF0)
#define GPIO77_GPIO77		MFP_CFG(GPIO77, AF0)
#define GPIO78_GPIO78		MFP_CFG(GPIO78, AF0)
#define GPIO79_GPIO79		MFP_CFG(GPIO79, AF0)
#define GPIO80_GPIO80		MFP_CFG(GPIO80, AF0)
#define GPIO81_GPIO81		MFP_CFG(GPIO81, AF0)
#define GPIO82_GPIO82		MFP_CFG(GPIO82, AF0)
#define GPIO83_GPIO83		MFP_CFG(GPIO83, AF0)
#define GPIO84_GPIO84		MFP_CFG(GPIO84, AF0)
#define GPIO85_GPIO85		MFP_CFG(GPIO85, AF0)
#define GPIO86_GPIO86		MFP_CFG(GPIO86, AF0)
#define GPIO87_GPIO87		MFP_CFG(GPIO87, AF0)
#define GPIO88_GPIO88		MFP_CFG(GPIO88, AF0)
#define GPIO89_GPIO89		MFP_CFG(GPIO89, AF0)
#define GPIO90_GPIO90		MFP_CFG(GPIO90, AF0)
#define GPIO91_GPIO91		MFP_CFG(GPIO91, AF0)
#define GPIO92_GPIO92		MFP_CFG(GPIO92, AF0)
#define GPIO93_GPIO93		MFP_CFG(GPIO93, AF0)
#define GPIO94_GPIO94		MFP_CFG(GPIO94, AF0)
#define GPIO95_GPIO95		MFP_CFG(GPIO95, AF0)
#define GPIO96_GPIO96		MFP_CFG(GPIO96, AF0)
#define GPIO97_GPIO97		MFP_CFG(GPIO97, AF0)
#define GPIO98_GPIO98		MFP_CFG(GPIO98, AF0)
#define GPIO99_GPIO99		MFP_CFG(GPIO99, AF0)
#define GPIO100_GPIO100		MFP_CFG(GPIO100, AF0)
#define GPIO101_GPIO101		MFP_CFG(GPIO101, AF0)
#define GPIO102_GPIO102		MFP_CFG(GPIO102, AF1)
#define GPIO103_GPIO103		MFP_CFG(GPIO103, AF1)
#define GPIO104_GPIO104		MFP_CFG(GPIO104, AF1)
#define GPIO105_GPIO105		MFP_CFG(GPIO105, AF1)
#define GPIO106_GPIO106		MFP_CFG(GPIO106, AF1)
#define GPIO107_GPIO107		MFP_CFG(GPIO107, AF1)
#define GPIO108_GPIO108		MFP_CFG(GPIO108, AF1)
#define GPIO109_GPIO109		MFP_CFG(GPIO109, AF1)
#define GPIO110_GPIO110		MFP_CFG(GPIO110, AF1)
#define GPIO111_GPIO111		MFP_CFG(GPIO111, AF1)
#define GPIO112_GPIO112		MFP_CFG(GPIO112, AF1)
#define GPIO113_GPIO113		MFP_CFG(GPIO113, AF1)
#define GPIO114_GPIO114		MFP_CFG(GPIO114, AF0)
#define GPIO115_GPIO115		MFP_CFG(GPIO115, AF0)
#define GPIO116_GPIO116		MFP_CFG(GPIO116, AF0)
#define GPIO117_GPIO117		MFP_CFG(GPIO117, AF0)
#define GPIO118_GPIO118		MFP_CFG(GPIO118, AF0)
#define GPIO119_GPIO119		MFP_CFG(GPIO119, AF0)
#define GPIO120_GPIO120		MFP_CFG(GPIO120, AF0)
#define GPIO121_GPIO121		MFP_CFG(GPIO121, AF0)
#define GPIO122_GPIO122		MFP_CFG(GPIO122, AF0)
#define GPIO123_GPIO123		MFP_CFG(GPIO123, AF0)
#define GPIO124_GPIO124		MFP_CFG(GPIO124, AF0)
#define GPIO125_GPIO125		MFP_CFG(GPIO125, AF0)
#define GPIO126_GPIO126		MFP_CFG(GPIO126, AF0)
#define GPIO127_GPIO127		MFP_CFG(GPIO127, AF0)
#define GPIO128_GPIO128		MFP_CFG(GPIO128, AF0)
#define GPIO129_GPIO129		MFP_CFG(GPIO129, AF0)
#define GPIO130_GPIO130		MFP_CFG(GPIO130, AF0)
#define GPIO131_GPIO131		MFP_CFG(GPIO131, AF0)
#define GPIO132_GPIO132		MFP_CFG(GPIO132, AF0)
#define GPIO133_GPIO133		MFP_CFG(GPIO133, AF0)
#define GPIO134_GPIO134		MFP_CFG(GPIO134, AF0)
#define GPIO135_GPIO135		MFP_CFG(GPIO135, AF0)
#define GPIO136_GPIO136		MFP_CFG(GPIO136, AF0)
#define GPIO137_GPIO137		MFP_CFG(GPIO137, AF0)
#define GPIO138_GPIO138		MFP_CFG(GPIO138, AF0)
#define GPIO139_GPIO139		MFP_CFG(GPIO139, AF0)
#define GPIO140_GPIO140		MFP_CFG(GPIO140, AF0)
#define GPIO141_GPIO141		MFP_CFG(GPIO141, AF0)
#define GPIO142_GPIO142		MFP_CFG(GPIO142, AF1)
#define GPIO143_GPIO143		MFP_CFG(GPIO143, AF1)
#define GPIO144_GPIO144		MFP_CFG(GPIO144, AF1)
#define GPIO145_GPIO145		MFP_CFG(GPIO145, AF1)
#define GPIO146_GPIO146		MFP_CFG(GPIO146, AF1)
#define GPIO147_GPIO147		MFP_CFG(GPIO147, AF1)
#define GPIO148_GPIO148		MFP_CFG(GPIO148, AF1)
#define GPIO149_GPIO149		MFP_CFG(GPIO149, AF1)
#define GPIO150_GPIO150		MFP_CFG(GPIO150, AF1)
#define GPIO151_GPIO151		MFP_CFG(GPIO151, AF1)
#define GPIO152_GPIO152		MFP_CFG(GPIO152, AF1)
#define GPIO153_GPIO153		MFP_CFG(GPIO153, AF1)
#define GPIO154_GPIO154		MFP_CFG(GPIO154, AF1)
#define GPIO155_GPIO155		MFP_CFG(GPIO155, AF1)
#define GPIO156_GPIO156		MFP_CFG(GPIO156, AF1)
#define GPIO157_GPIO157		MFP_CFG(GPIO157, AF1)
#define GPIO158_GPIO158		MFP_CFG(GPIO158, AF1)
#define GPIO159_GPIO159		MFP_CFG(GPIO159, AF1)
#define GPIO160_GPIO160		MFP_CFG(GPIO160, AF1)
#define GPIO161_GPIO161		MFP_CFG(GPIO161, AF1)
#define GPIO162_GPIO162		MFP_CFG(GPIO162, AF1)
#define GPIO163_GPIO163		MFP_CFG(GPIO163, AF1)
#define GPIO164_GPIO164		MFP_CFG(GPIO164, AF1)
#define GPIO165_GPIO165		MFP_CFG(GPIO165, AF1)
#define GPIO166_GPIO166		MFP_CFG(GPIO166, AF1)
#define GPIO167_GPIO167		MFP_CFG(GPIO167, AF1)
#define GPIO168_GPIO168		MFP_CFG(GPIO168, AF1)

/* SSP3 */
#define GPIO74_SSP_CLK         	MFP_CFG(GPIO74, AF4) | MFP_LPM_DRIVE_LOW
#define GPIO75_SSP_FRM         	MFP_CFG(GPIO75, AF4) | MFP_LPM_DRIVE_LOW
#define GPIO76_SSP_TXD         	MFP_CFG(GPIO76, AF4) | MFP_LPM_DRIVE_LOW
#define GPIO77_SSP_RXD         	MFP_CFG(GPIO77, AF4) | MFP_PULL_LOW | MFP_LPM_PULL_LOW

/* DFI */
#define GPIO108_DFI_D15		MFP_CFG(GPIO108, AF0) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO109_DFI_D14		MFP_CFG(GPIO109, AF0) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO110_DFI_D13		MFP_CFG(GPIO110, AF0) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO161_DFI_D12		MFP_CFG(GPIO161, AF0) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO162_DFI_D11		MFP_CFG(GPIO162, AF0) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO163_DFI_D10		MFP_CFG(GPIO163, AF0) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO164_DFI_D9		MFP_CFG(GPIO164, AF0) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO111_DFI_D8		MFP_CFG(GPIO111, AF0) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO104_DFI_D7		MFP_CFG(GPIO104, AF0) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO105_DFI_D6		MFP_CFG(GPIO105, AF0) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO106_DFI_D5		MFP_CFG(GPIO106, AF0) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO107_DFI_D4		MFP_CFG(GPIO107, AF0) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO165_DFI_D3		MFP_CFG(GPIO165, AF0) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO166_DFI_D2		MFP_CFG(GPIO166, AF0) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO167_DFI_D1		MFP_CFG(GPIO167, AF0) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO168_DFI_D0		MFP_CFG(GPIO168, AF0) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO143_ND_nCS0		MFP_CFG(GPIO143, AF0) | MFP_LPM_DRIVE_HIGH
#define GPIO144_ND_nCS1		MFP_CFG(GPIO144, AF0) | MFP_LPM_DRIVE_HIGH
#define GPIO147_ND_nWE		MFP_CFG(GPIO147, AF0) | MFP_LPM_DRIVE_HIGH
#define GPIO148_ND_nRE		MFP_CFG(GPIO148, AF0) | MFP_LPM_DRIVE_HIGH
#define GPIO150_ND_ALE		MFP_CFG(GPIO150, AF0) | MFP_LPM_DRIVE_LOW
#define GPIO149_ND_CLE		MFP_CFG(GPIO149, AF0) | MFP_LPM_DRIVE_LOW
#define GPIO112_ND_RDY0		MFP_CFG(GPIO112, AF0) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO160_ND_RDY1		MFP_CFG(GPIO160, AF0) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH

/* Static Memory Controller */
#define GPIO145_SMC_nCS0	MFP_CFG(GPIO145, AF0)
#define GPIO146_SMC_nCS1	MFP_CFG(GPIO146, AF0)
#define GPIO152_SMC_BE0		MFP_CFG(GPIO152, AF0)
#define GPIO153_SMC_BE1		MFP_CFG(GPIO153, AF0)
#define GPIO154_SMC_IRQ		MFP_CFG(GPIO154, AF0)
#define GPIO113_SMC_RDY		MFP_CFG(GPIO113, AF0)
#define GPIO151_SMC_SCLK	MFP_CFG(GPIO151, AF0)

/* Ethernet */
#define GPIO155_SM_ADVMUX	MFP_CFG(GPIO155, AF2)

/* UART1 */
#define GPIO45_UART1_RXD	MFP_CFG(GPIO45, AF1)
#define GPIO46_UART1_TXD	MFP_CFG(GPIO46, AF1)
#define GPIO29_UART1_RXD	MFP_CFG(GPIO29, AF1) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO30_UART1_TXD	MFP_CFG(GPIO30, AF1) | MFP_LPM_DRIVE_HIGH
#define GPIO31_UART1_CTS	MFP_CFG(GPIO31, AF1) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO32_UART1_RTS	MFP_CFG(GPIO32, AF1) | MFP_LPM_DRIVE_HIGH

/* UART2 */
#define GPIO47_UART2_RXD	MFP_CFG(GPIO47, AF1) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO48_UART2_TXD	MFP_CFG(GPIO48, AF1) | MFP_LPM_DRIVE_HIGH
#define GPIO49_UART2_CTS	MFP_CFG(GPIO49, AF1) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO50_UART2_RTS	MFP_CFG(GPIO50, AF1) | MFP_LPM_DRIVE_LOW

/* UART3 */
#define GPIO51_UART3_RXD	MFP_CFG(GPIO51, AF1) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO52_UART3_TXD	MFP_CFG(GPIO52, AF1) | MFP_LPM_DRIVE_HIGH
#define GPIO53_UART3_CTS	MFP_CFG(GPIO53, AF1)
#define GPIO54_UART3_RTS	MFP_CFG(GPIO54, AF1)

/* UART4 */
#define GPIO117_UART4_RXD	MFP_CFG(GPIO117, AF3)
#define GPIO118_UART4_TXD	MFP_CFG(GPIO118, AF3)

/* MMC1 */
#define GPIO124_MMC1_DAT7	MFP_CFG_DRV(GPIO124, AF1, FAST)
#define GPIO125_MMC1_DAT6	MFP_CFG_DRV(GPIO125, AF1, FAST)
#define GPIO129_MMC1_DAT5	MFP_CFG_DRV(GPIO129, AF1, FAST)
#define GPIO130_MMC1_DAT4	MFP_CFG_DRV(GPIO130, AF1, FAST)
#define GPIO131_MMC1_DAT3	MFP_CFG_DRV(GPIO131, AF1, FAST) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO132_MMC1_DAT2	MFP_CFG_DRV(GPIO132, AF1, FAST) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO133_MMC1_DAT1	MFP_CFG_DRV(GPIO133, AF1, FAST) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO134_MMC1_DAT0	MFP_CFG_DRV(GPIO134, AF1, FAST) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO136_MMC1_CMD	MFP_CFG_DRV(GPIO136, AF1, FAST) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO139_MMC1_CLK	MFP_CFG_DRV(GPIO139, AF1, FAST) | MFP_LPM_DRIVE_LOW
#define GPIO140_MMC1_CD		MFP_CFG_DRV(GPIO140, AF1, FAST)
#define GPIO141_MMC1_WP		MFP_CFG_DRV(GPIO141, AF1, FAST)

#define GPIO140_MMC1_CD_PULL_HIGH	GPIO140_MMC1_CD | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO140_MMC1_CD_PULL_LOW	GPIO140_MMC1_CD | MFP_PULL_LOW | MFP_LPM_PULL_LOW
#define GPIO141_MMC1_WP_PULL_HIGH	GPIO141_MMC1_WP | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO141_MMC1_WP_PULL_LOW	GPIO141_MMC1_WP | MFP_PULL_LOW | MFP_LPM_PULL_LOW

#define GPIO95_SDMMC_PEN	MFP_CFG(GPIO95, AF0) | MFP_LPM_DRIVE_LOW
/*MMC2*/
#define GPIO37_MMC2_DAT3	MFP_CFG_DRV(GPIO37, AF1, FAST) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO38_MMC2_DAT2	MFP_CFG_DRV(GPIO38, AF1, FAST) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO39_MMC2_DAT1	MFP_CFG_DRV(GPIO39, AF1, FAST) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO40_MMC2_DAT0	MFP_CFG_DRV(GPIO40, AF1, FAST) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO41_MMC2_CMD		MFP_CFG_DRV(GPIO41, AF1, FAST) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO42_MMC2_CLK		MFP_CFG_DRV(GPIO42, AF1, FAST) | MFP_LPM_DRIVE_LOW

/*MMC3*/
#define GPIO165_MMC3_DAT7	MFP_CFG_DRV(GPIO165, AF2, FAST) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO162_MMC3_DAT6	MFP_CFG_DRV(GPIO162, AF2, FAST) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO166_MMC3_DAT5	MFP_CFG_DRV(GPIO166, AF2, FAST) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO163_MMC3_DAT4	MFP_CFG_DRV(GPIO163, AF2, FAST) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO167_MMC3_DAT3	MFP_CFG_DRV(GPIO167, AF2, FAST) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO164_MMC3_DAT2	MFP_CFG_DRV(GPIO164, AF2, FAST) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO168_MMC3_DAT1	MFP_CFG_DRV(GPIO168, AF2, FAST) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO111_MMC3_DAT0	MFP_CFG_DRV(GPIO111, AF2, FAST) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO112_MMC3_CMD	MFP_CFG_DRV(GPIO112, AF2, FAST) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO151_MMC3_CLK	MFP_CFG_DRV(GPIO151, AF2, FAST) | MFP_LPM_DRIVE_LOW

/* LCD */
#define GPIO115_LED_PWR		MFP_CFG(GPIO115, AF0) | MFP_LPM_DRIVE_LOW
#define GPIO116_LCD_PWR		MFP_CFG(GPIO116, AF0) | MFP_LPM_DRIVE_LOW
#define GPIO74_LCD_FCLK		MFP_CFG_DRV(GPIO74, AF1, FAST)
#define GPIO75_LCD_LCLK		MFP_CFG_DRV(GPIO75, AF1, FAST)
#define GPIO76_LCD_PCLK		MFP_CFG_DRV(GPIO76, AF1, FAST)
#define GPIO77_LCD_DENA		MFP_CFG_DRV(GPIO77, AF1, FAST)
#define GPIO78_LCD_DD0		MFP_CFG_DRV(GPIO78, AF1, FAST)
#define GPIO79_LCD_DD1		MFP_CFG_DRV(GPIO79, AF1, FAST)
#define GPIO80_LCD_DD2		MFP_CFG_DRV(GPIO80, AF1, FAST)
#define GPIO81_LCD_DD3		MFP_CFG_DRV(GPIO81, AF1, FAST)
#define GPIO82_LCD_DD4		MFP_CFG_DRV(GPIO82, AF1, FAST)
#define GPIO83_LCD_DD5		MFP_CFG_DRV(GPIO83, AF1, FAST)
#define GPIO84_LCD_DD6		MFP_CFG_DRV(GPIO84, AF1, FAST)
#define GPIO85_LCD_DD7		MFP_CFG_DRV(GPIO85, AF1, FAST)
#define GPIO86_LCD_DD8		MFP_CFG_DRV(GPIO86, AF1, FAST)
#define GPIO87_LCD_DD9		MFP_CFG_DRV(GPIO87, AF1, FAST)
#define GPIO88_LCD_DD10		MFP_CFG_DRV(GPIO88, AF1, FAST)
#define GPIO89_LCD_DD11		MFP_CFG_DRV(GPIO89, AF1, FAST)
#define GPIO90_LCD_DD12		MFP_CFG_DRV(GPIO90, AF1, FAST)
#define GPIO91_LCD_DD13		MFP_CFG_DRV(GPIO91, AF1, FAST)
#define GPIO92_LCD_DD14		MFP_CFG_DRV(GPIO92, AF1, FAST)
#define GPIO93_LCD_DD15		MFP_CFG_DRV(GPIO93, AF1, FAST)
#define GPIO94_LCD_DD16		MFP_CFG_DRV(GPIO94, AF1, FAST)
#define GPIO95_LCD_DD17		MFP_CFG_DRV(GPIO95, AF1, FAST)
#define GPIO96_LCD_DD18		MFP_CFG_DRV(GPIO96, AF1, FAST)
#define GPIO97_LCD_DD19		MFP_CFG_DRV(GPIO97, AF1, FAST)
#define GPIO98_LCD_DD20		MFP_CFG_DRV(GPIO98, AF1, FAST)
#define GPIO99_LCD_DD21		MFP_CFG_DRV(GPIO99, AF1, FAST)
#define GPIO100_LCD_DD22	MFP_CFG_DRV(GPIO100, AF1, FAST)
#define GPIO101_LCD_DD23	MFP_CFG_DRV(GPIO101, AF1, FAST)
#define GPIO98_LCD_RST		MFP_CFG_DRV(GPIO98, AF0, FAST)

#define GPIO83_LCD_RST		MFP_CFG_DRV(GPIO83, AF0, FAST) | MFP_LPM_DRIVE_LOW
#define GPIO89_LCD_5V_BIAS	MFP_CFG_DRV(GPIO89, AF0, FAST) | MFP_LPM_DRIVE_LOW
#define GPIO114_MN_CLK_OUT	MFP_CFG(GPIO114, AF1) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO104_THC_PWR		MFP_CFG_DRV(GPIO104, AF1, FAST) | MFP_LPM_DRIVE_LOW

/*LCD TV path*/
#define GPIO124_LCD_DD24	MFP_CFG_DRV(GPIO124, AF2, FAST)
#define GPIO125_LCD_DD25	MFP_CFG_DRV(GPIO125, AF2, FAST)
#define GPIO126_LCD_DD33	MFP_CFG_DRV(GPIO126, AF2, FAST)
#define GPIO127_LCD_DD26	MFP_CFG_DRV(GPIO127, AF2, FAST)
#define GPIO128_LCD_DD27	MFP_CFG_DRV(GPIO128, AF2, FAST)
#define GPIO129_LCD_DD28	MFP_CFG_DRV(GPIO129, AF2, FAST)
#define GPIO130_LCD_DD29	MFP_CFG_DRV(GPIO130, AF2, FAST)
#define GPIO135_LCD_DD30	MFP_CFG_DRV(GPIO135, AF2, FAST)
#define GPIO137_LCD_DD31	MFP_CFG_DRV(GPIO137, AF2, FAST)
#define GPIO138_LCD_DD32	MFP_CFG_DRV(GPIO138, AF2, FAST)
#define GPIO140_LCD_DD34	MFP_CFG_DRV(GPIO140, AF2, FAST)
#define GPIO141_LCD_DD35	MFP_CFG_DRV(GPIO141, AF2, FAST)

/* I2C */
#define TWSI1_SCL		MFP_CFG_DRV(TWSI1_SCL, AF0, SLOW) | MFP_LPM_PULL_HIGH
#define TWSI1_SDA		MFP_CFG_DRV(TWSI1_SDA, AF0, SLOW) | MFP_LPM_PULL_HIGH
#define GPIO43_TWSI2_SCL	MFP_CFG_DRV(GPIO43, AF1, SLOW) | MFP_LPM_PULL_LOW
#define GPIO44_TWSI2_SDA	MFP_CFG_DRV(GPIO44, AF1, SLOW) | MFP_LPM_PULL_LOW
#define GPIO55_TWSI2_SCL	MFP_CFG_DRV(GPIO55, AF5, SLOW) | MFP_LPM_PULL_LOW
#define GPIO56_TWSI2_SDA	MFP_CFG_DRV(GPIO56, AF5, SLOW) | MFP_LPM_PULL_LOW
#define GPIO71_TWSI3_SCL	MFP_CFG_DRV(GPIO71, AF1, SLOW) | MFP_LPM_PULL_LOW
#define GPIO72_TWSI3_SDA	MFP_CFG_DRV(GPIO72, AF1, SLOW) | MFP_LPM_PULL_LOW
#define TWSI4_SCL		MFP_CFG_DRV(TWSI4_SCL, AF0, SLOW) | MFP_LPM_PULL_LOW
#define TWSI4_SDA		MFP_CFG_DRV(TWSI4_SDA, AF0, SLOW) | MFP_LPM_PULL_LOW
#define GPIO99_TWSI5_SCL	MFP_CFG_DRV(GPIO99, AF4, SLOW) | MFP_LPM_PULL_LOW
#define GPIO100_TWSI5_SDA	MFP_CFG_DRV(GPIO100, AF4, SLOW) | MFP_LPM_PULL_LOW
#define GPIO97_TWSI6_SCL	MFP_CFG_DRV(GPIO97, AF2, SLOW) | MFP_LPM_PULL_LOW
#define GPIO98_TWSI6_SDA	MFP_CFG_DRV(GPIO98, AF2, SLOW) | MFP_LPM_PULL_LOW

/* SSPA1 */
#define GPIO24_I2S_SYSCLK	MFP_CFG(GPIO24, AF1) | MFP_LPM_DRIVE_LOW
#define GPIO25_I2S_BITCLK	MFP_CFG(GPIO25, AF1) | MFP_LPM_DRIVE_LOW
#define GPIO26_I2S_SYNC		MFP_CFG(GPIO26, AF1) | MFP_LPM_DRIVE_LOW
#define GPIO27_I2S_DATA_OUT	MFP_CFG(GPIO27, AF1) | MFP_LPM_DRIVE_LOW
#define GPIO28_I2S_SDATA_IN	MFP_CFG(GPIO28, AF1) | MFP_PULL_LOW | MFP_LPM_PULL_LOW
#define GPIO114_I2S_MCLK	MFP_CFG(GPIO114, AF1)
#define CLK_REQ                 MFP_CFG(CLK_REQ, AF0)

/* SSPA2 */
#define GPIO33_SSPA2_CLK	MFP_CFG(GPIO33, AF1) | MFP_LPM_DRIVE_LOW
#define GPIO34_SSPA2_FRM	MFP_CFG(GPIO34, AF1) | MFP_LPM_DRIVE_LOW
#define GPIO35_SSPA2_TXD	MFP_CFG(GPIO35, AF1) | MFP_LPM_DRIVE_LOW
#define GPIO36_SSPA2_RXD	MFP_CFG(GPIO36, AF1) | MFP_PULL_LOW | MFP_LPM_PULL_LOW

/* Keypad */
#define GPIO00_KP_MKIN0		MFP_CFG(GPIO0, AF1)
#define GPIO01_KP_MKOUT0	MFP_CFG(GPIO1, AF1)
#define GPIO02_KP_MKIN1		MFP_CFG(GPIO2, AF1)
#define GPIO03_KP_MKOUT1	MFP_CFG(GPIO3, AF1)
#define GPIO04_KP_MKIN2		MFP_CFG(GPIO4, AF1)
#define GPIO05_KP_MKOUT2	MFP_CFG(GPIO5, AF1)
#define GPIO06_KP_MKIN3		MFP_CFG(GPIO6, AF1)
#define GPIO07_KP_MKOUT3	MFP_CFG(GPIO7, AF1)
#define GPIO08_KP_MKIN4		MFP_CFG(GPIO8, AF1)
#define GPIO09_KP_MKOUT4	MFP_CFG(GPIO9, AF1)
#define GPIO10_KP_MKIN5		MFP_CFG(GPIO10, AF1)
#define GPIO11_KP_MKOUT5	MFP_CFG(GPIO11, AF1)
#define GPIO12_KP_MKIN6		MFP_CFG(GPIO12, AF1)
#define GPIO13_KP_MKOUT6	MFP_CFG(GPIO13, AF1)
#define GPIO14_KP_MKIN7		MFP_CFG(GPIO14, AF1)
#define GPIO15_KP_MKOUT7	MFP_CFG(GPIO15, AF1)
#define GPIO16_KP_DKIN0		MFP_CFG(GPIO16, AF1) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO17_KP_DKIN1		MFP_CFG(GPIO17, AF1) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO18_KP_DKIN2		MFP_CFG(GPIO18, AF1) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO19_KP_DKIN3		MFP_CFG(GPIO19, AF1) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO20_KP_DKIN4		MFP_CFG(GPIO20, AF1) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO21_KP_DKIN5		MFP_CFG(GPIO21, AF1) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO22_KP_DKIN6		MFP_CFG(GPIO22, AF1) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO23_KP_DKIN7		MFP_CFG(GPIO23, AF1) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO102_KP_DKIN0	MFP_CFG(GPIO102, AF3) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO103_KP_DKIN1	MFP_CFG(GPIO103, AF3) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO142_KP_DKIN2	MFP_CFG(GPIO142, AF3) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO16_KEY		MFP_CFG(GPIO16, AF0) | MFP_PULL_HIGH | MFP_LPM_PULL_LOW
#define GPIO17_KEY		MFP_CFG(GPIO17, AF0) | MFP_PULL_HIGH | MFP_LPM_PULL_LOW
#define GPIO18_KEY		MFP_CFG(GPIO18, AF0) | MFP_PULL_HIGH | MFP_LPM_PULL_LOW
#define GPIO19_KEY		MFP_CFG(GPIO19, AF0) | MFP_PULL_HIGH | MFP_LPM_PULL_LOW
#define GPIO102_KEY		MFP_CFG(GPIO102, AF0) | MFP_PULL_HIGH | MFP_LPM_PULL_LOW
#define GPIO103_KEY		MFP_CFG(GPIO103, AF0) | MFP_PULL_HIGH | MFP_LPM_PULL_LOW
#define GPIO142_KEY		MFP_CFG(GPIO142, AF0) | MFP_PULL_HIGH | MFP_LPM_PULL_LOW

/* Camera Parallel */
/* Bonnell Board */
#define GPIO59_CCIC_IN7		MFP_CFG_DRV(GPIO59, AF1, FAST)
#define GPIO60_CCIC_IN6		MFP_CFG_DRV(GPIO60, AF1, FAST)
#define GPIO61_CCIC_IN5		MFP_CFG_DRV(GPIO61, AF1, FAST)
#define GPIO62_CCIC_IN4		MFP_CFG_DRV(GPIO62, AF1, FAST)
#define GPIO63_CCIC_IN3		MFP_CFG_DRV(GPIO63, AF1, FAST)
#define GPIO64_CCIC_IN2		MFP_CFG_DRV(GPIO64, AF1, FAST)
#define GPIO65_CCIC_IN1		MFP_CFG_DRV(GPIO65, AF1, FAST)
#define GPIO66_CCIC_IN0		MFP_CFG_DRV(GPIO66, AF1, FAST)
#define GPIO67_CAM_HSYNC	MFP_CFG_DRV(GPIO67, AF1, FAST)
#define GPIO68_CAM_VSYNC	MFP_CFG_DRV(GPIO68, AF1, FAST)
#define GPIO69_CAM_MCLK		MFP_CFG_DRV(GPIO69, AF1, FAST) | MFP_LPM_DRIVE_LOW
#define GPIO70_CAM_PCLK		MFP_CFG_DRV(GPIO70, AF1, FAST)

/* G50 Board */
#define GPIO12_CAM_IN7		MFP_CFG_DRV(GPIO12, AF3, FAST)
#define GPIO13_CAM_IN6		MFP_CFG_DRV(GPIO13, AF3, FAST)
#define GPIO14_CAM_IN5		MFP_CFG_DRV(GPIO14, AF3, FAST)
#define GPIO15_CAM_IN4		MFP_CFG_DRV(GPIO15, AF3, FAST)
#define GPIO16_CAM_IN3		MFP_CFG_DRV(GPIO16, AF3, FAST)
#define GPIO17_CAM_IN2		MFP_CFG_DRV(GPIO17, AF3, FAST)
#define GPIO18_CAM_IN1		MFP_CFG_DRV(GPIO18, AF3, FAST)
#define GPIO19_CAM_IN0		MFP_CFG_DRV(GPIO19, AF3, FAST)
#define GPIO20_CAM_HSYNC	MFP_CFG_DRV(GPIO20, AF3, FAST)
#define GPIO21_CAM_VSYNC	MFP_CFG_DRV(GPIO21, AF3, FAST)
#define GPIO22_CAM_MCLK		MFP_CFG_DRV(GPIO22, AF3, FAST)
#define GPIO23_CAM_PCLK		MFP_CFG_DRV(GPIO23, AF3, FAST)

/* Brownstone Board */
#define GPIO67_CAM3_RST_N	MFP_CFG(GPIO67, AF0) | MFP_LPM_DRIVE_LOW
#define GPIO68_CAM2_RST_N	MFP_CFG(GPIO68, AF0) | MFP_LPM_DRIVE_LOW
#define GPIO73_CAM1_RST_N	MFP_CFG(GPIO73, AF0) | MFP_LPM_DRIVE_LOW
#define GPIO67_CAM1_PWDN	MFP_CFG(GPIO67, AF0) | MFP_LPM_DRIVE_HIGH
#define GPIO68_CAM2_PWDN	MFP_CFG(GPIO68, AF0) | MFP_LPM_DRIVE_HIGH
#define GPIO73_FLASH_EN		MFP_CFG(GPIO73, AF0) | MFP_LPM_DRIVE_LOW


/* ULPI */
#define GPIO59_ULPI_DAT7	MFP_CFG(GPIO59, AF2)
#define GPIO60_ULPI_DAT6	MFP_CFG(GPIO60, AF2)
#define GPIO61_ULPI_DAT5	MFP_CFG(GPIO61, AF2)
#define GPIO62_ULPI_DAT4	MFP_CFG(GPIO62, AF2)
#define GPIO63_ULPI_DAT3	MFP_CFG(GPIO63, AF2)
#define GPIO64_ULPI_DAT2	MFP_CFG(GPIO64, AF2)
#define GPIO65_ULPI_DAT1	MFP_CFG(GPIO65, AF2)
#define GPIO66_ULPI_DAT0	MFP_CFG(GPIO66, AF2)
#define GPIO67_ULPI_STP		MFP_CFG(GPIO67, AF2)
#define GPIO68_ULPI_NXT		MFP_CFG(GPIO68, AF2)
#define GPIO69_ULPI_DIR		MFP_CFG(GPIO69, AF2)
#define GPIO70_ULPI_CLK		MFP_CFG(GPIO70, AF2)

/* Codec*/
#define GPIO45_WM8994_LDOEN	MFP_CFG(GPIO45, AF0) | MFP_LPM_DRIVE_LOW
#define GPIO23_CODEC_INT	MFP_CFG(GPIO23, AF0) | MFP_PULL_LOW | MFP_LPM_PULL_LOW

/* HDMI */
#define GPIO30_HDMI_DET		GPIO30_GPIO30 | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO46_HDMI_DET		GPIO46_GPIO46 | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO54_HDMI_CEC         GPIO54_GPIO54 | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH

/* PMIC */
#define PMIC_PMIC_INT		MFP_CFG(PMIC_INT, AF0)
#define GPIO123_LOW_BATT	MFP_CFG(GPIO123, AF0) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH

/* WIFI */
#define VCXO_REQ_AF2           	MFP_CFG(VCXO_REQ, AF2) | MFP_LPM_DRIVE_HIGH
#define VCXO_OUT_AF2           	MFP_CFG(VCXO_OUT, AF2) | MFP_LPM_DRIVE_HIGH
#define GPIO57_WLAN_PD_N       	MFP_CFG(GPIO57, AF0) | MFP_LPM_DRIVE_LOW
#define GPIO58_WLAN_RST_N	MFP_CFG(GPIO58, AF0) | MFP_LPM_DRIVE_HIGH

/* PWM */
#define GPIO49_ULPI_CLK_PWM2    MFP_CFG(GPIO49, AF3) | MFP_LPM_PULL_LOW
#define GPIO53_LCM_BIAS_PWM     MFP_CFG_DRV(GPIO53, AF5, SLOW) | MFP_LPM_DRIVE_LOW
#define GPIO73_LCM_BIAS_PWM     MFP_CFG(GPIO73, AF3) | MFP_LPM_PULL_LOW

/* HSIC */
#define GPIO80_HSIC_RESET	GPIO80_GPIO80 | MFP_LPM_DRIVE_LOW
#define GPIO120_HSIC_RESET	GPIO120_GPIO120 | MFP_LPM_DRIVE_LOW

/* ULPI */
#define GPIO124_USB_HUB_RST	GPIO124_GPIO124
#define GPIO4_USB_PHY_RST	GPIO4_GPIO4 | MFP_LPM_DRIVE_LOW

/* RTC */
#define GPIO31_RTC_ALARM	GPIO31_GPIO31 | MFP_LPM_PULL_HIGH | MFP_LPM_EDGE_BOTH

/* PWR KEY */
#define GPIO130_PWR_KEY		GPIO130_GPIO130| MFP_PULL_HIGH | MFP_LPM_PULL_HIGH | MFP_LPM_EDGE_BOTH
#define GPIO2_VCORE_ADJ0	GPIO2_GPIO2 | MFP_LPM_DRIVE_LOW
#define GPIO3_VCORE_ADJ1	GPIO3_GPIO3 | MFP_LPM_DRIVE_LOW
#define GPIO10_REBOOT		GPIO10_GPIO10 | MFP_LPM_DRIVE_LOW
#define GPIO123_VCORE_MODE	GPIO123_GPIO123 | MFP_LPM_DRIVE_LOW
#define GPIO9_LOW_PWR		GPIO9_GPIO9 | MFP_PULL_LOW | MFP_LPM_PULL_LOW

/* GPS */
#define GPIO14_GPS_ON		GPIO14_GPIO14 | MFP_LPM_DRIVE_LOW
#define GPIO15_GPS_RST		GPIO15_GPIO15 | MFP_LPM_DRIVE_LOW

/* LED */
#define GPIO74_LED_O		GPIO74_GPIO74 | MFP_LPM_DRIVE_HIGH
#define GPIO75_LED_B		GPIO75_GPIO75 | MFP_LPM_DRIVE_HIGH
#define GPIO76_LED_R		GPIO76_GPIO76 | MFP_LPM_DRIVE_HIGH
#define GPIO77_LED_G		GPIO77_GPIO77 | MFP_LPM_DRIVE_HIGH
#define GPIO84_LED_O		GPIO84_GPIO84 | MFP_LPM_DRIVE_HIGH
#define GPIO85_LED_B		GPIO85_GPIO85 | MFP_LPM_DRIVE_HIGH
#define GPIO86_LED_R		GPIO86_GPIO86 | MFP_LPM_DRIVE_HIGH
#define GPIO87_LED_G		GPIO87_GPIO87 | MFP_LPM_DRIVE_HIGH

/* VBUS */
#define GPIO81_VBUS_FLT		GPIO81_GPIO81 | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO82_VBUS_EN		GPIO82_GPIO82 | MFP_LPM_DRIVE_LOW

/* SENSOR & TOUCH*/
#define GPIO92_CM3623_INT_PIN	GPIO92_GPIO92 | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO101_TSI_INT		GPIO101_GPIO101 | MFP_LPM_PULL_LOW
#define GPIO78_TSI_OE_N		GPIO78_GPIO78 | MFP_LPM_DRIVE_HIGH

/* VERSION PINS */
#define GPIO125_VERS		GPIO125_GPIO125 | MFP_LPM_PULL_LOW
#define GPIO126_VERS		GPIO126_GPIO126 | MFP_LPM_PULL_LOW
#define GPIO127_VERS		GPIO127_GPIO127 | MFP_LPM_PULL_LOW
#define GPIO128_VERS		GPIO128_GPIO128 | MFP_LPM_PULL_LOW

/* SPI */
#define GPIO94_SPI_DCLK         MFP_CFG(GPIO94, AF3) | MFP_PULL_LOW | MFP_LPM_PULL_LOW
#define GPIO95_SPI_CS0          MFP_CFG(GPIO95, AF3) | MFP_PULL_HIGH | MFP_LPM_PULL_HIGH
#define GPIO96_SPI_DIN          MFP_CFG(GPIO96, AF3) | MFP_PULL_LOW | MFP_LPM_PULL_LOW
#define GPIO97_SPI_DOUT		MFP_CFG_DRV(GPIO97, AF3, FAST)

/* JTAG */
#define JTAG_PRI_TDI		MFP_CFG(PRI_TDI, AF0) | MFP_LPM_PULL_HIGH
#define JTAG_PRI_TMS		MFP_CFG(PRI_TMS, AF0) | MFP_LPM_PULL_HIGH
#define JTAG_PRI_TCK		MFP_CFG(PRI_TCK, AF0) | MFP_LPM_PULL_HIGH
#define JTAG_PRI_TDO		MFP_CFG(PRI_TDO, AF0) | MFP_LPM_PULL_HIGH
#define RESET_OUT_N		MFP_CFG(RESET_OUT, AF0) | MFP_LPM_DRIVE_HIGH
#define G_CLK_REQ		MFP_CFG(CLK_REQ, AF0) | MFP_LPM_PULL_HIGH
#define VCXO_REQ_AF0		MFP_CFG(VCXO_REQ, AF0) | MFP_LPM_PULL_HIGH
#define VCXO_OUT_AF0		MFP_CFG(VCXO_OUT, AF0) | MFP_LPM_DRIVE_LOW


/*Playstone specific*/
#define ND_CLE_GPIO149       MFP_CFG(ND_CLE, AF1)

#define GPIO59_USBH1_ULPI_D7		MFP_CFG(GPIO59, AF2)
#define GPIO59_USBH1_ULPI_D6		MFP_CFG(GPIO60, AF2)
#define GPIO59_USBH1_ULPI_D5		MFP_CFG(GPIO61, AF2)
#define GPIO59_USBH1_ULPI_D4		MFP_CFG(GPIO62, AF2)
#define GPIO59_USBH1_ULPI_D3		MFP_CFG(GPIO63, AF2)
#define GPIO59_USBH1_ULPI_D2		MFP_CFG(GPIO64, AF2)
#define GPIO59_USBH1_ULPI_D1		MFP_CFG(GPIO65, AF2)
#define GPIO59_USBH1_ULPI_D0		MFP_CFG(GPIO66, AF2)
#define GPIO59_USBH1_ULPI_STP		MFP_CFG(GPIO67, AF2)
#define GPIO59_USBH1_ULPI_NXT		MFP_CFG(GPIO68, AF2)
#define GPIO59_USBH1_ULPI_DIR		MFP_CFG(GPIO69, AF2)
#define GPIO59_USBH1_ULPI_CLK		MFP_CFG(GPIO70, AF2)

#define GPIO12_CCIC_IN7		MFP_CFG_DRV(GPIO12, AF3, FAST)
#define GPIO13_CCIC_IN6		MFP_CFG_DRV(GPIO13, AF3, FAST)
#define GPIO14_CCIC_IN5		MFP_CFG_DRV(GPIO14, AF3, FAST)
#define GPIO15_CCIC_IN4		MFP_CFG_DRV(GPIO15, AF3, FAST)
#define GPIO16_CCIC_IN3		MFP_CFG_DRV(GPIO16, AF3, FAST)
#define GPIO17_CCIC_IN2		MFP_CFG_DRV(GPIO17, AF3, FAST)
#define GPIO18_CCIC_IN1		MFP_CFG_DRV(GPIO18, AF3, FAST)
#define GPIO19_CCIC_IN0		MFP_CFG_DRV(GPIO19, AF3, FAST)
#define GPIO20_CCIC_HSYNC	MFP_CFG_DRV(GPIO20, AF3, FAST)
#define GPIO21_CCIC_VSYNC	MFP_CFG_DRV(GPIO21, AF3, FAST)
#define GPIO23_CCIC_PCLK		MFP_CFG_DRV(GPIO23, AF1, FAST)


#endif /* __ASM_MACH_MFP_MMP2_H */

