#include <assert.h>
#include "../src/calculator.h"
#include <cifuzz/cifuzz.h>
#include <fuzzer/FuzzedDataProvider.h>
#include <cstdint>
#include <cstddef>
#include <string>

FUZZ_TEST_SETUP() {
  // Perform any one-time setup required by the FUZZ_TEST function.
}

FUZZ_TEST(const uint8_t *data, size_t size) {
FuzzedDataProvider fuzzed_data(data, size); 
int a = fuzzed_data.ConsumeFloatingPoint<double>();
char b = fuzzed_data.PickValueInArray({'+', '-', '*', '/'});
int c = fuzzed_data.ConsumeFloatingPoint<double>();

try{
	int result = calculator(a, b, c);
	assert(result>= INT_MIN && result <= INT_MAX);
}
catch(const std::exception &e){

} 
}
