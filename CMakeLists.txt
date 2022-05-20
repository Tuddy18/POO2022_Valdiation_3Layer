cmake_minimum_required(VERSION 3.21)
project(POO2022_Valdiation_3Layer)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_executable(POO2022_Valdiation_3Layer
        src/main.cpp src/domain/product/Product.cpp src/domain/product/Product.h src/repo/Repo.h src/domain/Entity.cpp src/domain/Entity.h src/exceptions/custom_exception.h src/exceptions/domain_exception.h src/exceptions/repo_exception.h src/domain/IValidator.h src/domain/product/ProductValidator.cpp src/domain/product/ProductValidator.h src/service/ProductService.cpp src/service/ProductService.h src/exceptions/service_exception.h src/ui/ShopController.cpp src/ui/ShopController.h src/exceptions/ui_exception.h)
