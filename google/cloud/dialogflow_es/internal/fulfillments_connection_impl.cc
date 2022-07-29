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
// source: google/cloud/dialogflow/v2/fulfillment.proto

#include "google/cloud/dialogflow_es/internal/fulfillments_connection_impl.h"
#include "google/cloud/dialogflow_es/internal/fulfillments_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

FulfillmentsConnectionImpl::FulfillmentsConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<dialogflow_es_internal::FulfillmentsStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      FulfillmentsConnection::options())) {}

StatusOr<google::cloud::dialogflow::v2::Fulfillment>
FulfillmentsConnectionImpl::GetFulfillment(
    google::cloud::dialogflow::v2::GetFulfillmentRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetFulfillment(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::dialogflow::v2::GetFulfillmentRequest const& request) {
        return stub_->GetFulfillment(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::dialogflow::v2::Fulfillment>
FulfillmentsConnectionImpl::UpdateFulfillment(
    google::cloud::dialogflow::v2::UpdateFulfillmentRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateFulfillment(request),
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::v2::UpdateFulfillmentRequest const&
                 request) {
        return stub_->UpdateFulfillment(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
