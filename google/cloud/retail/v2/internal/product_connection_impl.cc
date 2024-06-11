// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/retail/v2/product_service.proto

#include "google/cloud/retail/v2/internal/product_connection_impl.h"
#include "google/cloud/retail/v2/internal/product_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace retail_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<retail_v2::ProductServiceRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<retail_v2::ProductServiceRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<retail_v2::ProductServiceBackoffPolicyOption>()->clone();
}

std::unique_ptr<retail_v2::ProductServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<retail_v2::ProductServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<retail_v2::ProductServicePollingPolicyOption>()->clone();
}

}  // namespace

ProductServiceConnectionImpl::ProductServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<retail_v2_internal::ProductServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      ProductServiceConnection::options())) {}

StatusOr<google::cloud::retail::v2::Product>
ProductServiceConnectionImpl::CreateProduct(
    google::cloud::retail::v2::CreateProductRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateProduct(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::retail::v2::CreateProductRequest const& request) {
        return stub_->CreateProduct(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::retail::v2::Product>
ProductServiceConnectionImpl::GetProduct(
    google::cloud::retail::v2::GetProductRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetProduct(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::retail::v2::GetProductRequest const& request) {
        return stub_->GetProduct(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::retail::v2::Product>
ProductServiceConnectionImpl::ListProducts(
    google::cloud::retail::v2::ListProductsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListProducts(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::retail::v2::Product>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<retail_v2::ProductServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::retail::v2::ListProductsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context, Options const& options,
                google::cloud::retail::v2::ListProductsRequest const& request) {
              return stub->ListProducts(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::retail::v2::ListProductsResponse r) {
        std::vector<google::cloud::retail::v2::Product> result(
            r.products().size());
        auto& messages = *r.mutable_products();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::retail::v2::Product>
ProductServiceConnectionImpl::UpdateProduct(
    google::cloud::retail::v2::UpdateProductRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateProduct(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::retail::v2::UpdateProductRequest const& request) {
        return stub_->UpdateProduct(context, options, request);
      },
      *current, request, __func__);
}

Status ProductServiceConnectionImpl::DeleteProduct(
    google::cloud::retail::v2::DeleteProductRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteProduct(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::retail::v2::DeleteProductRequest const& request) {
        return stub_->DeleteProduct(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::retail::v2::PurgeProductsResponse>>
ProductServiceConnectionImpl::PurgeProducts(
    google::cloud::retail::v2::PurgeProductsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->PurgeProducts(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::retail::v2::PurgeProductsResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::retail::v2::PurgeProductsRequest const& request) {
        return stub->AsyncPurgeProducts(cq, std::move(context),
                                        std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::retail::v2::PurgeProductsResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::retail::v2::ImportProductsResponse>>
ProductServiceConnectionImpl::ImportProducts(
    google::cloud::retail::v2::ImportProductsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->ImportProducts(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::retail::v2::ImportProductsResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::retail::v2::ImportProductsRequest const& request) {
        return stub->AsyncImportProducts(cq, std::move(context),
                                         std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::retail::v2::ImportProductsResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::retail::v2::SetInventoryResponse>>
ProductServiceConnectionImpl::SetInventory(
    google::cloud::retail::v2::SetInventoryRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->SetInventory(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::retail::v2::SetInventoryResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::retail::v2::SetInventoryRequest const& request) {
        return stub->AsyncSetInventory(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::retail::v2::SetInventoryResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::retail::v2::AddFulfillmentPlacesResponse>>
ProductServiceConnectionImpl::AddFulfillmentPlaces(
    google::cloud::retail::v2::AddFulfillmentPlacesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->AddFulfillmentPlaces(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::retail::v2::AddFulfillmentPlacesResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::retail::v2::AddFulfillmentPlacesRequest const&
              request) {
        return stub->AsyncAddFulfillmentPlaces(cq, std::move(context),
                                               std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::retail::v2::AddFulfillmentPlacesResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::retail::v2::RemoveFulfillmentPlacesResponse>>
ProductServiceConnectionImpl::RemoveFulfillmentPlaces(
    google::cloud::retail::v2::RemoveFulfillmentPlacesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->RemoveFulfillmentPlaces(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::retail::v2::RemoveFulfillmentPlacesResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::retail::v2::RemoveFulfillmentPlacesRequest const&
              request) {
        return stub->AsyncRemoveFulfillmentPlaces(cq, std::move(context),
                                                  std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::retail::v2::RemoveFulfillmentPlacesResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::retail::v2::AddLocalInventoriesResponse>>
ProductServiceConnectionImpl::AddLocalInventories(
    google::cloud::retail::v2::AddLocalInventoriesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->AddLocalInventories(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::retail::v2::AddLocalInventoriesResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::retail::v2::AddLocalInventoriesRequest const&
              request) {
        return stub->AsyncAddLocalInventories(cq, std::move(context),
                                              std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::retail::v2::AddLocalInventoriesResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::retail::v2::RemoveLocalInventoriesResponse>>
ProductServiceConnectionImpl::RemoveLocalInventories(
    google::cloud::retail::v2::RemoveLocalInventoriesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->RemoveLocalInventories(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::retail::v2::RemoveLocalInventoriesResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::retail::v2::RemoveLocalInventoriesRequest const&
              request) {
        return stub->AsyncRemoveLocalInventories(cq, std::move(context),
                                                 std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::retail::v2::RemoveLocalInventoriesResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2_internal
}  // namespace cloud
}  // namespace google
