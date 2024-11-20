// Copyright © 2024 ChefKiss. Licensed under the Thou Shalt Not Profit License version 1.5.
// See LICENSE for details.

#pragma once
#include <IOKit/IOTypes.h>
#include <PrivateHeaders/GPUDriversAMD/CAIL/GoldenSettings.hpp>
#include <PrivateHeaders/iVega/Regs/GC.hpp>
#include <PrivateHeaders/iVega/Regs/SDMA0.hpp>

static const CAILGoldenRegister gcGoldenSettingsRaven[] = {
    GOLDEN_REGISTER(mmDB_DEBUG2, 0xF00FFFFF, 0x400),
    GOLDEN_REGISTER(mmDB_DEBUG3, 0x80000000, 0x80000000),
    GOLDEN_REGISTER(mmGB_GPU_ID, 0xF, 0x0),
    GOLDEN_REGISTER(mmPA_SC_BINNER_EVENT_CNTL_3, 0x3, 0x82400024),
    GOLDEN_REGISTER(mmPA_CL_GB_HORZ_CLIP_ADJ, 0x3FFFFFFF, 0x1),
    GOLDEN_REGISTER(mmPA_SC_LINE_STIPPLE_STATE, 0xFF0F, 0x0),
    GOLDEN_REGISTER(mmPA_SC_AA_SAMPLE_LOCS_PIXEL_X1Y1_3, 0x3019, 0x1000),
    GOLDEN_REGISTER(mmSPI_RESOURCE_RESERVE_CU_0, 0x7FFFF, 0x800),
    GOLDEN_REGISTER(mmSPI_RESOURCE_RESERVE_CU_1, 0x7FFFF, 0x800),
    GOLDEN_REGISTER(mmSPI_RESOURCE_RESERVE_EN_CU_0, 0x1FFFFFF, 0xFFFF87),
    GOLDEN_REGISTER(mmSPI_RESOURCE_RESERVE_EN_CU_1, 0x1FFFFFF, 0xFFFF8F),
    GOLDEN_REGISTER(mmPA_SC_AA_SAMPLE_LOCS_PIXEL_X0Y0_3, 0x7FFFFFF, 0x20A2000),
    GOLDEN_REGISTER(mmTA_CNTL_AUX, 0xFFFFFEEF, 0x10B0000),
    GOLDEN_REGISTER(mmVGT_GS_MAX_WAVE_ID, 0xFFF, 0xFF),
    GOLDEN_REGISTER(mmCB_HW_CONTROL, 0xFFFDF3CF, 0x12107),
    GOLDEN_REGISTER(mmCB_HW_CONTROL_3, 0x30000000, 0x10000000),
    GOLDEN_REGISTER(mmCPC_UTCL1_CNTL, 0x8000000, 0x8000080),
    GOLDEN_REGISTER(mmCPF_UTCL1_CNTL, 0x8000000, 0x8000080),
    GOLDEN_REGISTER(mmCPG_UTCL1_CNTL, 0x8000000, 0x8000080),
    GOLDEN_REGISTER(mmGB_ADDR_CONFIG, 0xFFFF77FF, 0x24000042),
    GOLDEN_REGISTER(mmGB_ADDR_CONFIG_READ, 0xFFFF77FF, 0x24000042),
    GOLDEN_REGISTER(mmIA_UTCL1_CNTL, 0x8000000, 0x8000080),
    GOLDEN_REGISTER(mmPA_CL_GB_HORZ_DISC_ADJ, 0xFFFFFFFF, 0x4048000),
    GOLDEN_REGISTER(mmPA_SC_MODE_CNTL_1, 0x6000000, 0x6000000),
    GOLDEN_REGISTER(mmRLC_GPM_UTCL1_CNTL_0, 0x8000000, 0x8000080),
    GOLDEN_REGISTER(mmRLC_GPM_UTCL1_CNTL_1, 0x8000000, 0x8000080),
    GOLDEN_REGISTER(mmRLC_GPM_UTCL1_CNTL_2, 0x8000000, 0x8000080),
    GOLDEN_REGISTER(mmRLC_PREWALKER_UTCL1_CNTL, 0x8000000, 0x8000080),
    GOLDEN_REGISTER(mmRLC_SPM_UTCL1_CNTL, 0x8000000, 0x8000080),
    GOLDEN_REGISTER(mmRMI_UTCL1_CNTL2, 0x30000, 0x20000),
    GOLDEN_REGISTER(mmTCP_CHAN_STEER_HI, 0xFFFFFFFF, 0x0),
    GOLDEN_REGISTER(mmTCP_CHAN_STEER_LO, 0xFFFFFFFF, 0x3210),
    GOLDEN_REGISTER(mmTD_CNTL, 0x1BD9F33, 0x800),
    GOLDEN_REGISTER(mmVGT_CACHE_INVALIDATION, 0x3FFF3AF3, 0x19200000),
    GOLDEN_REGISTER(mmWD_UTCL1_CNTL, 0x8000000, 0x8000080),
    GOLDEN_REGISTER_TERMINATOR,
};

static const CAILGoldenRegister gcGoldenSettingsRaven2[] = {
    GOLDEN_REGISTER(mmDB_DEBUG2, 0xF00FFFFF, 0x400),
    GOLDEN_REGISTER(mmDB_DEBUG3, 0x80000000, 0x80000000),
    GOLDEN_REGISTER(mmGB_GPU_ID, 0xF, 0x0),
    GOLDEN_REGISTER(mmPA_SC_BINNER_EVENT_CNTL_3, 0x3, 0x82400024),
    GOLDEN_REGISTER(mmPA_CL_GB_HORZ_CLIP_ADJ, 0x3FFFFFFF, 0x1),
    GOLDEN_REGISTER(mmPA_SC_LINE_STIPPLE_STATE, 0xFF0F, 0x0),
    GOLDEN_REGISTER(mmPA_SC_AA_SAMPLE_LOCS_PIXEL_X1Y1_3, 0x3019, 0x1000),
    GOLDEN_REGISTER(mmSPI_RESOURCE_RESERVE_CU_0, 0x7FFFF, 0x800),
    GOLDEN_REGISTER(mmSPI_RESOURCE_RESERVE_CU_1, 0x7FFFF, 0x800),
    GOLDEN_REGISTER(mmSPI_RESOURCE_RESERVE_EN_CU_0, 0x1FFFFFF, 0xFFFF87),
    GOLDEN_REGISTER(mmSPI_RESOURCE_RESERVE_EN_CU_1, 0x1FFFFFF, 0xFFFF8F),
    GOLDEN_REGISTER(mmPA_SC_AA_SAMPLE_LOCS_PIXEL_X0Y0_3, 0x7FFFFFF, 0x20A2000),
    GOLDEN_REGISTER(mmTA_CNTL_AUX, 0xFFFFFEEF, 0x10B0000),
    GOLDEN_REGISTER(mmVGT_GS_MAX_WAVE_ID, 0xFFF, 0xFF),
    GOLDEN_REGISTER(mmCB_DCC_CONFIG, 0xFF7FFFFF, 0x4000000),
    GOLDEN_REGISTER(mmCB_HW_CONTROL, 0xFFFDF3CF, 0x14104),
    GOLDEN_REGISTER(mmCB_HW_CONTROL_2, 0xFF7FFFFF, 0xA000000),
    GOLDEN_REGISTER(mmCPC_UTCL1_CNTL, 0x7F0FFFFF, 0x8000080),
    GOLDEN_REGISTER(mmCPF_UTCL1_CNTL, 0xFF8FFFFF, 0x8000080),
    GOLDEN_REGISTER(mmCPG_UTCL1_CNTL, 0x7F8FFFFF, 0x8000080),
    GOLDEN_REGISTER(mmDB_DEBUG2, 0xF00FFFFF, 0x400),
    GOLDEN_REGISTER(mmGB_ADDR_CONFIG, 0xFFFF77FF, 0x26013041),
    GOLDEN_REGISTER(mmGB_ADDR_CONFIG_READ, 0xFFFF77FF, 0x26013041),
    GOLDEN_REGISTER(mmIA_UTCL1_CNTL, 0x3F8FFFFF, 0x8000080),
    GOLDEN_REGISTER(mmPA_CL_GB_HORZ_DISC_ADJ, 0xFFFFFFFF, 0x4040000),
    GOLDEN_REGISTER(mmRLC_GPM_UTCL1_CNTL_0, 0xFF0FFFFF, 0x8000080),
    GOLDEN_REGISTER(mmRLC_GPM_UTCL1_CNTL_1, 0xFF0FFFFF, 0x8000080),
    GOLDEN_REGISTER(mmRLC_GPM_UTCL1_CNTL_2, 0xFF0FFFFF, 0x8000080),
    GOLDEN_REGISTER(mmRLC_PREWALKER_UTCL1_CNTL, 0xFF0FFFFF, 0x8000080),
    GOLDEN_REGISTER(mmRLC_SPM_UTCL1_CNTL, 0xFF0FFFFF, 0x8000080),
    GOLDEN_REGISTER(mmTCP_CHAN_STEER_HI, 0xFFFFFFFF, 0x0),
    GOLDEN_REGISTER(mmTCP_CHAN_STEER_LO, 0xFFFFFFFF, 0x10),
    GOLDEN_REGISTER(mmTD_CNTL, 0x1BD9F33, 0x1000000),
    GOLDEN_REGISTER(mmWD_UTCL1_CNTL, 0x3F8FFFFF, 0x8000080),
    GOLDEN_REGISTER_TERMINATOR,
};

static const CAILGoldenRegister gcGoldenSettingsRenoir[] = {
    GOLDEN_REGISTER(mmCB_HW_CONTROL, 0xFFFDF3CF, 0x14104),
    GOLDEN_REGISTER(mmCB_HW_CONTROL_2, 0xFF7FFFFF, 0xA000000),
    GOLDEN_REGISTER(mmDB_DEBUG2, 0xF00FFFFF, 0x400),
    GOLDEN_REGISTER(mmGB_ADDR_CONFIG, 0xFFFF77FF, 0x24000042),
    GOLDEN_REGISTER(mmGB_ADDR_CONFIG_READ, 0xFFFF77FF, 0x24000042),
    GOLDEN_REGISTER(mmPA_CL_GB_HORZ_CLIP_ADJ, 0x3FFFFFFF, 0x1),
    GOLDEN_REGISTER(mmPA_CL_GB_HORZ_DISC_ADJ, 0xFFFFFFFF, 0x4040000),
    GOLDEN_REGISTER(mmPA_SC_LINE_STIPPLE_STATE, 0xFF0F, 0x0),
    GOLDEN_REGISTER(mmTA_CNTL_AUX, 0xFFFFFEEF, 0x10B0000),
    GOLDEN_REGISTER(mmTCP_CHAN_STEER_HI, 0xFFFFFFFF, 0x0),
    GOLDEN_REGISTER(mmTCP_CHAN_STEER_LO, 0xFFFFFFFF, 0x3120),
    GOLDEN_REGISTER(mmGCEA_SDP_BACKDOOR_DATACREDITS0, 0xFFFFFFFF, 0xCCCC),
    GOLDEN_REGISTER_TERMINATOR,
};

static const CAILGoldenRegister sdmaGoldenSettingsRaven[] = {
    GOLDEN_REGISTER(mmSDMA0_CHICKEN_BITS, 0xFE931F07, 0x2831D07),
    GOLDEN_REGISTER(mmSDMA0_CLK_CTRL, 0xFFFFFFFF, 0x3F000100),
    GOLDEN_REGISTER(mmSDMA0_GFX_IB_CNTL, 0x800F0111, 0x100),
    GOLDEN_REGISTER(mmSDMA0_GFX_RB_WPTR_POLL_CNTL, 0xFFFFFFF7, 0x403000),
    GOLDEN_REGISTER(mmSDMA0_POWER_CNTL, 0xFC3FFFFF, 0x40000051),
    GOLDEN_REGISTER(mmSDMA0_RLC0_IB_CNTL, 0x800F0111, 0x100),
    GOLDEN_REGISTER(mmSDMA0_RLC0_RB_WPTR_POLL_CNTL, 0xFFFFFFF7, 0x403000),
    GOLDEN_REGISTER(mmSDMA0_RLC1_IB_CNTL, 0x800F0111, 0x100),
    GOLDEN_REGISTER(mmSDMA0_RLC1_RB_WPTR_POLL_CNTL, 0xFFFFFFF7, 0x403000),
    GOLDEN_REGISTER(mmSDMA0_UTCL1_PAGE, 0x3FF, 0x3C0),
    GOLDEN_REGISTER(mmSDMA0_GB_ADDR_CONFIG, 0x18773F, 0x2),
    GOLDEN_REGISTER(mmSDMA0_GB_ADDR_CONFIG_READ, 0x18773F, 0x2),
    GOLDEN_REGISTER(mmSDMA0_GFX_MINOR_PTR_UPDATE, 0x1, 0x1),
    GOLDEN_REGISTER_TERMINATOR,
};

static const CAILGoldenRegister sdmaGoldenSettingsRaven2[] = {
    GOLDEN_REGISTER(mmSDMA0_CHICKEN_BITS, 0xFE931F07, 0x2831D07),
    GOLDEN_REGISTER(mmSDMA0_CLK_CTRL, 0xFFFFFFFF, 0x3F000100),
    GOLDEN_REGISTER(mmSDMA0_GFX_IB_CNTL, 0x800F0111, 0x100),
    GOLDEN_REGISTER(mmSDMA0_GFX_RB_WPTR_POLL_CNTL, 0xFFFFFFF7, 0x403000),
    GOLDEN_REGISTER(mmSDMA0_POWER_CNTL, 0xFC3FFFFF, 0x40000051),
    GOLDEN_REGISTER(mmSDMA0_RLC0_IB_CNTL, 0x800F0111, 0x100),
    GOLDEN_REGISTER(mmSDMA0_RLC0_RB_WPTR_POLL_CNTL, 0xFFFFFFF7, 0x403000),
    GOLDEN_REGISTER(mmSDMA0_RLC1_IB_CNTL, 0x800F0111, 0x100),
    GOLDEN_REGISTER(mmSDMA0_RLC1_RB_WPTR_POLL_CNTL, 0xFFFFFFF7, 0x403000),
    GOLDEN_REGISTER(mmSDMA0_UTCL1_PAGE, 0x3FF, 0x3C0),
    GOLDEN_REGISTER(mmSDMA0_GB_ADDR_CONFIG, 0x18773F, 0x3001),
    GOLDEN_REGISTER(mmSDMA0_GB_ADDR_CONFIG_READ, 0x18773F, 0x3001),
    GOLDEN_REGISTER(mmSDMA0_GFX_MINOR_PTR_UPDATE, 0x1, 0x1),
    GOLDEN_REGISTER_TERMINATOR,
};

static const CAILGoldenRegister sdmaGoldenSettingsRenoir[] = {
    GOLDEN_REGISTER(mmSDMA0_CHICKEN_BITS, 0xFE931F07, 0x2831F07),
    GOLDEN_REGISTER(mmSDMA0_CLK_CTRL, 0xFFFFFFFF, 0x3F000100),
    GOLDEN_REGISTER(mmSDMA0_GB_ADDR_CONFIG, 0x18773F, 0x2),
    GOLDEN_REGISTER(mmSDMA0_GB_ADDR_CONFIG_READ, 0x18773F, 0x2),
    GOLDEN_REGISTER(mmSDMA0_GFX_RB_WPTR_POLL_CNTL, 0xFFFFFFF7, 0x403000),
    GOLDEN_REGISTER(mmSDMA0_POWER_CNTL, 0x3FFF07, 0x40000051),
    GOLDEN_REGISTER(mmSDMA0_RLC0_RB_WPTR_POLL_CNTL, 0xFFFFFFF7, 0x403000),
    GOLDEN_REGISTER(mmSDMA0_RLC1_RB_WPTR_POLL_CNTL, 0xFFFFFFF7, 0x403000),
    GOLDEN_REGISTER(mmSDMA0_UTCL1_PAGE, 0x3FF, 0x3C0),
    GOLDEN_REGISTER(mmSDMA0_UTCL1_WATERMK, 0xFC000000, 0x3FBE1FE),
    GOLDEN_REGISTER(mmSDMA0_GFX_MINOR_PTR_UPDATE, 0x1, 0x1),
    GOLDEN_REGISTER_TERMINATOR,
};

static const CAILIPGoldenRegisters goldenSettingsRaven[] = {
    GOLDEN_REGISTERS(GC, gcGoldenSettingsRaven),
    GOLDEN_REGISTERS(SDMA0, sdmaGoldenSettingsRaven),
    GOLDEN_REGISTERS_TERMINATOR,
};

static const CAILIPGoldenRegisters goldenSettingsRaven2[] = {
    GOLDEN_REGISTERS(GC, gcGoldenSettingsRaven2),
    GOLDEN_REGISTERS(SDMA0, sdmaGoldenSettingsRaven2),
    GOLDEN_REGISTERS_TERMINATOR,
};

static const CAILIPGoldenRegisters goldenSettingsRenoir[] = {
    GOLDEN_REGISTERS(GC, gcGoldenSettingsRenoir),
    GOLDEN_REGISTERS(SDMA0, sdmaGoldenSettingsRenoir),
    GOLDEN_REGISTERS_TERMINATOR,
};