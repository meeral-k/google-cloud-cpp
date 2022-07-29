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
// source: google/api/servicecontrol/v1/quota_controller.proto

#include "google/cloud/servicecontrol/quota_controller_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace servicecontrol {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

QuotaControllerClient::QuotaControllerClient(
    std::shared_ptr<QuotaControllerConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
QuotaControllerClient::~QuotaControllerClient() = default;

StatusOr<google::api::servicecontrol::v1::AllocateQuotaResponse>
QuotaControllerClient::AllocateQuota(
    google::api::servicecontrol::v1::AllocateQuotaRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AllocateQuota(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicecontrol
}  // namespace cloud
}  // namespace google
