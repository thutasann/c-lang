#include <stdio.h>
#include <string.h>
#include <sys/sysctl.h>
#include <sys/types.h>

// get system info (mac)
int main() {

    // --- get the host name
    char hostname[256];
    size_t size = sizeof(hostname);

    if (sysctlbyname("kern.hostname", hostname, &size, NULL, 0) == 0) {
        printf("Hostname: %s\n", hostname);
    }

    // --- get the CPU brand
    char cpuBrand[256];
    size = sizeof(cpuBrand);
    if (sysctlbyname("machdep.cpu.brand_string", cpuBrand, &size, NULL, 0) == 0) {
        printf("CPU: %s\n", cpuBrand);
    }

    // --- get the number of CPUs
    int numCPU;
    size = sizeof(numCPU);
    if (sysctlbyname("hw.ncpu", &numCPU, &size, NULL, 0) == 0) {
        printf("Number of CPUs: %d\n", numCPU);
    }

    // --- get total physical memory (RAM)s
    int64_t memSize;
    size = sizeof(memSize);
    if (sysctlbyname("hw.memsize", &memSize, &size, NULL, 0) == 0) {
        printf("Total Memory: %lld MB\n", memSize / (1024 * 1024));
    }

    return 0;
}