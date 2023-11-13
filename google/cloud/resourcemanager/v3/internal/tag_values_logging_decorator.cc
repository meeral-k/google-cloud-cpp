// Copyright 2023 Google LLC
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
// source: google/cloud/resourcemanager/v3/tag_values.proto

#include "google/cloud/resourcemanager/v3/internal/tag_values_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/resourcemanager/v3/tag_values.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace resourcemanager_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TagValuesLogging::TagValuesLogging(std::shared_ptr<TagValuesStub> child,
                                   TracingOptions tracing_options,
                                   std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

StatusOr<google::cloud::resourcemanager::v3::ListTagValuesResponse>
TagValuesLogging::ListTagValues(
    grpc::ClientContext& context,
    google::cloud::resourcemanager::v3::ListTagValuesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::resourcemanager::v3::ListTagValuesRequest const&
                 request) { return child_->ListTagValues(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::resourcemanager::v3::TagValue>
TagValuesLogging::GetTagValue(
    grpc::ClientContext& context,
    google::cloud::resourcemanager::v3::GetTagValueRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::resourcemanager::v3::GetTagValueRequest const&
                 request) { return child_->GetTagValue(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::resourcemanager::v3::TagValue>
TagValuesLogging::GetNamespacedTagValue(
    grpc::ClientContext& context,
    google::cloud::resourcemanager::v3::GetNamespacedTagValueRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::resourcemanager::v3::
                 GetNamespacedTagValueRequest const& request) {
        return child_->GetNamespacedTagValue(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TagValuesLogging::AsyncCreateTagValue(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::resourcemanager::v3::CreateTagValueRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::resourcemanager::v3::CreateTagValueRequest const&
                 request) {
        return child_->AsyncCreateTagValue(cq, std::move(context), options,
                                           request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TagValuesLogging::AsyncUpdateTagValue(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::resourcemanager::v3::UpdateTagValueRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::resourcemanager::v3::UpdateTagValueRequest const&
                 request) {
        return child_->AsyncUpdateTagValue(cq, std::move(context), options,
                                           request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TagValuesLogging::AsyncDeleteTagValue(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::cloud::resourcemanager::v3::DeleteTagValueRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::cloud::resourcemanager::v3::DeleteTagValueRequest const&
                 request) {
        return child_->AsyncDeleteTagValue(cq, std::move(context), options,
                                           request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> TagValuesLogging::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return child_->GetIamPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> TagValuesLogging::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return child_->SetIamPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
TagValuesLogging::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return child_->TestIamPermissions(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
TagValuesLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), options,
                                         request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

future<Status> TagValuesLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             Options const& options,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), options,
                                            request);
      },
      cq, std::move(context), options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3_internal
}  // namespace cloud
}  // namespace google
