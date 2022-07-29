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
// source: google/cloud/billing/v1/cloud_catalog.proto

#include "google/cloud/billing/internal/cloud_catalog_connection_impl.h"
#include "google/cloud/billing/internal/cloud_catalog_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace billing_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudCatalogConnectionImpl::CloudCatalogConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<billing_internal::CloudCatalogStub> stub, Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      CloudCatalogConnection::options())) {}

StreamRange<google::cloud::billing::v1::Service>
CloudCatalogConnectionImpl::ListServices(
    google::cloud::billing::v1::ListServicesRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry =
      std::shared_ptr<billing::CloudCatalogRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListServices(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::billing::v1::Service>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::billing::v1::ListServicesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::billing::v1::ListServicesRequest const&
                       request) {
              return stub->ListServices(context, request);
            },
            r, function_name);
      },
      [](google::cloud::billing::v1::ListServicesResponse r) {
        std::vector<google::cloud::billing::v1::Service> result(
            r.services().size());
        auto& messages = *r.mutable_services();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StreamRange<google::cloud::billing::v1::Sku>
CloudCatalogConnectionImpl::ListSkus(
    google::cloud::billing::v1::ListSkusRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry =
      std::shared_ptr<billing::CloudCatalogRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListSkus(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::billing::v1::Sku>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::cloud::billing::v1::ListSkusRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::billing::v1::ListSkusRequest const& request) {
              return stub->ListSkus(context, request);
            },
            r, function_name);
      },
      [](google::cloud::billing::v1::ListSkusResponse r) {
        std::vector<google::cloud::billing::v1::Sku> result(r.skus().size());
        auto& messages = *r.mutable_skus();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace billing_internal
}  // namespace cloud
}  // namespace google
