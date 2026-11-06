#include <stdio.h>

#include <stdint.h>

#include "pal_common_support.h"

#include "pal_pcie_enum.h"

#include "platform_image_def.h"

#include "platform_override_struct.h"

#include "platform_override_fvp.h"

uint32_t pal_is_bdf_exerciser(uint32_t bdf)
{
    print(ACS_PRINT_ERR, "PAL API pal_is_bdf_exerciser not implemented \n", 0);
    return 0;
}

uint32_t pal_exerciser_set_param(EXERCISER_PARAM_TYPE Type, uint64_t Value1, uint64_t Value2, uint32_t Bdf)
{
    print(ACS_PRINT_ERR, "PAL API pal_exerciser_set_param not implemented \n", 0);
    return 0;
}

uint32_t pal_exerciser_get_param(EXERCISER_PARAM_TYPE Type, uint64_t *Value1, uint64_t *Value2, uint32_t Bdf)
{
    print(ACS_PRINT_ERR, "PAL API pal_exerciser_get_param not implemented \n", 0);
    return 0;
}

uint32_t pal_exerciser_start_dma_direction(uint64_t Base, EXERCISER_DMA_ATTR Direction)
{
    print(ACS_PRINT_ERR, "PAL API pal_exerciser_start_dma_direction not implemented \n", 0);
    return 0;
}

uint32_t pal_exerciser_get_state(EXERCISER_STATE *State, uint32_t Bdf)
{
    print(ACS_PRINT_ERR, "PAL API pal_exerciser_get_state not implemented \n", 0);
    return 0;
}

uint32_t pal_exerciser_get_data(EXERCISER_DATA_TYPE Type, exerciser_data_t *Data, uint32_t Bdf, uint64_t Ecam)
{
    print(ACS_PRINT_ERR, "PAL API pal_exerciser_get_data not implemented \n", 0);
    return 0;
}

uint32_t pal_exerciser_ops(EXERCISER_OPS Ops, uint64_t Param, uint32_t Bdf)
{
    print(ACS_PRINT_ERR, "PAL API pal_exerciser_ops not implemented \n", 0);
    return 0;
}

void pal_exerciser_disable_rp_pio_register(uint32_t bdf)
{
    print(ACS_PRINT_ERR, "PAL API pal_exerciser_disable_rp_pio_register not implemented \n", 0);
}

uint32_t pal_exerciser_check_poison_data_forwarding_support()
{
    print(ACS_PRINT_ERR, "PAL API pal_exerciser_check_poison_data_forwarding_support not implemented \n", 0);
    return 0;
}

uint32_t pal_exerciser_get_pcie_ras_compliant_err_node(uint32_t bdf, uint32_t rp_bdf)
{
    print(ACS_PRINT_ERR, "PAL API pal_exerciser_get_pcie_ras_compliant_err_node not implemented \n", 0);
    return 0;
}

uint64_t pal_exerciser_get_ras_status(uint32_t ras_node, uint32_t bdf, uint32_t rp_bdf)
{
    print(ACS_PRINT_ERR, "PAL API pal_exerciser_get_ras_status not implemented \n", 0);
    return 0;
}

uint32_t pal_exerciser_set_bar_response(uint32_t bdf)
{
    print(ACS_PRINT_ERR, "PAL API pal_exerciser_set_bar_response not implemented \n", 0);
    return 0;
}

uint32_t pal_exerciser_check_firmware_handle_support()
{
    print(ACS_PRINT_ERR, "PAL API pal_exerciser_check_firmware_handle_support not implemented \n", 0);
    return 0;
}

