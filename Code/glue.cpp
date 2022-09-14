
#include <emscripten.h>

extern "C" {

// Not using size_t for array indices as the values used by the javascript code are signed.

EM_JS(void, array_bounds_check_error, (size_t idx, size_t size), {
  throw 'Array index ' + idx + ' out of bounds: [0,' + size + ')';
});

void array_bounds_check(const int array_size, const int array_idx) {
  if (array_idx < 0 || array_idx >= array_size) {
    array_bounds_check_error(array_idx, array_size);
  }
}

// VoidPtr

void EMSCRIPTEN_KEEPALIVE emscripten_bind_VoidPtr___destroy___0(void** self) {
  delete self;
}

// Matrix

Matrix* EMSCRIPTEN_KEEPALIVE emscripten_bind_Matrix_Matrix_0() {
  return new Matrix();
}

double EMSCRIPTEN_KEEPALIVE emscripten_bind_Matrix_multMatrix_1(Matrix* self, int n) {
  return self->multMatrix(n);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Matrix___destroy___0(Matrix* self) {
  delete self;
}

}

