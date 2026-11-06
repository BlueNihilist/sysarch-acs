#include <stdio.h>

#include <stdint.h>

#include "pal_common_support.h"

#include "pal_pcie_enum.h"

#include "platform_image_def.h"

#include "platform_override_struct.h"

#include "platform_override_fvp.h"

uint32_t pal_smmu_is_etr_behind_catu(char *etr_path)
{
    print(ACS_PRINT_ERR, "PAL API pal_smmu_is_etr_behind_catu not implemented \n", 0);
    return 0;
}

uint32_t pal_pcie_dsm_ste_tags()
{
    print(ACS_PRINT_ERR, "PAL API pal_pcie_dsm_ste_tags not implemented \n", 0);
    return 0;
}

uint32_t pal_pmu_check_monitor_count_value(uint64_t interface_acpiid, uint32_t count_value, uint32_t eventid)
{
    print(ACS_PRINT_ERR, "PAL API pal_pmu_check_monitor_count_value not implemented \n", 0);
    return 0;
}

uint32_t pal_generate_traffic(uint64_t interface_acpiid, uint32_t pmu_node_index, uint32_t mon_index, uint32_t eventid)
{
    print(ACS_PRINT_ERR, "PAL API pal_generate_traffic not implemented \n", 0);
    return 0;
}

uint32_t pal_pmu_get_multi_traffic_support_interface(uint64_t *interface_acpiid, uint32_t *num_traffic_type_support)
{
    print(ACS_PRINT_ERR, "PAL API pal_pmu_get_multi_traffic_support_interface not implemented \n", 0);
    return 0;
}

uint32_t pal_ras_check_plat_poison_support()
{
    print(ACS_PRINT_ERR, "PAL API pal_ras_check_plat_poison_support not implemented \n", 0);
    return 0;
}

uint32_t pal_ras_setup_error(RAS_ERR_IN_t in_param, RAS_ERR_OUT_t *out_param)
{
    print(ACS_PRINT_ERR, "PAL API pal_ras_setup_error not implemented \n", 0);
    return 0;
}

uint32_t pal_ras_inject_error(RAS_ERR_IN_t in_param, RAS_ERR_OUT_t *out_param)
{
    print(ACS_PRINT_ERR, "PAL API pal_ras_inject_error not implemented \n", 0);
    return 0;
}

