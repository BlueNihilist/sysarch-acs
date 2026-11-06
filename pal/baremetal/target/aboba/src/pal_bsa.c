#include <stdio.h>

#include <stdint.h>

#include "pal_common_support.h"

#include "pal_pcie_enum.h"

#include "platform_image_def.h"

#include "platform_override_struct.h"

#include "platform_override_fvp.h"

uint32_t pal_get_pe_count()
{
    print(ACS_PRINT_ERR, "PAL API pal_get_pe_count not implemented \n", 0);
    return 0;
}

uint64_t *pal_get_phy_mpidr_list_base()
{
    print(ACS_PRINT_ERR, "PAL API *pal_get_phy_mpidr_list_base not implemented \n", 0);
    return 0;
}

uint32_t pal_pe_install_esr(uint32_t ExceptionType, void (*esr)(uint64_t, void *))
{
    print(ACS_PRINT_ERR, "PAL API pal_pe_install_esr not implemented \n", 0);
    return 0;
}

void pal_pe_update_elr(void *context, uint64_t offset)
{
    print(ACS_PRINT_ERR, "PAL API pal_pe_update_elr not implemented \n", 0);
}

uint64_t pal_pe_get_esr(void *context)
{
    print(ACS_PRINT_ERR, "PAL API pal_pe_get_esr not implemented \n", 0);
    return 0;
}

uint64_t pal_pe_get_far(void *context)
{
    print(ACS_PRINT_ERR, "PAL API pal_pe_get_far not implemented \n", 0);
    return 0;
}

uint32_t pal_psci_get_conduit()
{
    print(ACS_PRINT_ERR, "PAL API pal_psci_get_conduit not implemented \n", 0);
    return 0;
}

uint32_t pal_gic_install_isr(uint32_t int_id, void (*isr)())
{
    print(ACS_PRINT_ERR, "PAL API pal_gic_install_isr not implemented \n", 0);
    return 0;
}

uint32_t pal_gic_end_of_interrupt(uint32_t int_id)
{
    print(ACS_PRINT_ERR, "PAL API pal_gic_end_of_interrupt not implemented \n", 0);
    return 0;
}

void pal_gic_free_irq(uint32_t IrqNum, uint32_t MappedIrqNum)
{
    print(ACS_PRINT_ERR, "PAL API pal_gic_free_irq not implemented \n", 0);
}

void pal_mmu_add_mmap()
{
    print(ACS_PRINT_ERR, "PAL API pal_mmu_add_mmap not implemented \n", 0);
}

void *pal_mmu_get_mmap_list()
{
    print(ACS_PRINT_ERR, "PAL API *pal_mmu_get_mmap_list not implemented \n", 0);
}

uint32_t pal_mmu_get_mapping_count()
{
    print(ACS_PRINT_ERR, "PAL API pal_mmu_get_mapping_count not implemented \n", 0);
    return 0;
}

uint32_t pal_pcie_p2p_support()
{
    print(ACS_PRINT_ERR, "PAL API pal_pcie_p2p_support not implemented \n", 0);
    return 0;
}

uint32_t pal_pcie_device_driver_present(uint32_t seg, uint32_t bus, uint32_t dev, uint32_t fn)
{
    print(ACS_PRINT_ERR, "PAL API pal_pcie_device_driver_present not implemented \n", 0);
    return 0;
}

uint32_t pal_get_msi_vectors(uint32_t Seg, uint32_t Bus, uint32_t Dev, uint32_t Fn, PERIPHERAL_VECTOR_LIST **MVector)
{
    print(ACS_PRINT_ERR, "PAL API pal_get_msi_vectors not implemented \n", 0);
    return 0;
}

uint32_t pal_pcie_get_rp_transaction_frwd_support(uint32_t seg, uint32_t bus, uint32_t dev, uint32_t fn)
{
    print(ACS_PRINT_ERR, "PAL API pal_pcie_get_rp_transaction_frwd_support not implemented \n", 0);
    return 0;
}

uint32_t pal_pcie_is_onchip_peripheral(uint32_t bdf)
{
    print(ACS_PRINT_ERR, "PAL API pal_pcie_is_onchip_peripheral not implemented \n", 0);
    return 0;
}

uint32_t pal_pcie_mem_get_offset(uint32_t bdf, PCIE_MEM_TYPE_INFO_e mem_type)
{
    print(ACS_PRINT_ERR, "PAL API pal_pcie_mem_get_offset not implemented \n", 0);
    return 0;
}

void pal_peripheral_uart_setup()
{
    print(ACS_PRINT_ERR, "PAL API pal_peripheral_uart_setup not implemented \n", 0);
}

void pal_print(char *string, uint64_t data)
{
    print(ACS_PRINT_ERR, "PAL API pal_print not implemented \n", 0);
}

void * pal_mem_virt_to_phys(void *Va)
{
    print(ACS_PRINT_ERR, "PAL API pal_mem_virt_to_phys not implemented \n", 0);
    return 0;
}

void * pal_mem_phys_to_virt(uint64_t Pa)
{
    print(ACS_PRINT_ERR, "PAL API pal_mem_phys_to_virt not implemented \n", 0);
    return 0;
}

uint64_t pal_time_delay_ms(uint64_t MicroSeconds)
{
    print(ACS_PRINT_ERR, "PAL API pal_time_delay_ms not implemented \n", 0);
    return 0;
}

uint32_t pal_mem_page_size()
{
    print(ACS_PRINT_ERR, "PAL API pal_mem_page_size not implemented \n", 0);
    return 0;
}

void * pal_mem_alloc_pages(uint32_t NumPages)
{
    print(ACS_PRINT_ERR, "PAL API pal_mem_alloc_pages not implemented \n", 0);
    return 0;
}

void pal_mem_free_pages(void *PageBase, uint32_t NumPages)
{
    print(ACS_PRINT_ERR, "PAL API pal_mem_free_pages not implemented \n", 0);
}

void * pal_aligned_alloc(uint32_t alignment, uint32_t size)
{
    print(ACS_PRINT_ERR, "PAL API pal_aligned_alloc not implemented \n", 0);
    return 0;
}

void pal_mem_free_aligned(void *Buffer)
{
    print(ACS_PRINT_ERR, "PAL API pal_mem_free_aligned not implemented \n", 0);
}

void * pal_mem_alloc_at_address(uint64_t mem_base, uint64_t Size)
{
    print(ACS_PRINT_ERR, "PAL API pal_mem_alloc_at_address not implemented \n", 0);
    return 0;
}

void pal_mem_free_at_address(uint64_t mem_base, uint64_t Size)
{
    print(ACS_PRINT_ERR, "PAL API pal_mem_free_at_address not implemented \n", 0);
}

void * mem_alloc(size_t alignment, size_t size)
{
    print(ACS_PRINT_ERR, "PAL API mem_alloc not implemented \n", 0);
    return 0;
}

void mem_free(void *ptr)
{
    print(ACS_PRINT_ERR, "PAL API mem_free not implemented \n", 0);
}

uint32_t pal_exit_acs()
{
    print(ACS_PRINT_ERR, "PAL API pal_exit_acs not implemented \n", 0);
    return 0;
}

uint64_t pal_dma_mem_alloc(void **buffer, uint32_t length, void *dev, uint32_t flag, addr_t *dma_addr)
{
    print(ACS_PRINT_ERR, "PAL API pal_dma_mem_alloc not implemented \n", 0);
    return 0;
}

void pal_dma_mem_free(void *buffer, uint64_t mem_dma, unsigned int length, void *port, unsigned int flags)
{
    print(ACS_PRINT_ERR, "PAL API pal_dma_mem_free not implemented \n", 0);
}

void pal_dma_scsi_get_dma_addr(void *port, void *dma_addr, unsigned int *dma_len)
{
    print(ACS_PRINT_ERR, "PAL API pal_dma_scsi_get_dma_addr not implemented \n", 0);
}

int pal_dma_mem_get_attrs(void *buf, uint32_t *attr, uint32_t *sh)
{
    print(ACS_PRINT_ERR, "PAL API pal_dma_mem_get_attrs not implemented \n", 0);
    return 0;
}

void * pal_mem_alloc_cacheable(uint32_t Bdf, uint32_t Size, void **Pa)
{
    print(ACS_PRINT_ERR, "PAL API pal_mem_alloc_cacheable not implemented \n", 0);
    return 0;
}

void pal_mem_free_cacheable(uint32_t Bdf, uint32_t Size, void *Va, void *Pa)
{
    print(ACS_PRINT_ERR, "PAL API pal_mem_free_cacheable not implemented \n", 0);
}

