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
// source: google/cloud/compute/images/v1/images.proto

#include "google/cloud/compute/images/v1/internal/images_rest_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/absl_str_join_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_images_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ImagesRestMetadata::ImagesRestMetadata(std::shared_ptr<ImagesRestStub> child,
                                       std::string api_client_header)
    : child_(std::move(child)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ImagesRestMetadata::AsyncDeleteImages(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::images::v1::DeleteImagesRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncDeleteImages(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ImagesRestMetadata::AsyncDeprecate(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::images::v1::DeprecateRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncDeprecate(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::Image> ImagesRestMetadata::GetImages(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::images::v1::GetImagesRequest const& request) {
  SetMetadata(rest_context);
  return child_->GetImages(rest_context, request);
}

StatusOr<google::cloud::cpp::compute::v1::Image>
ImagesRestMetadata::GetFromFamily(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::images::v1::GetFromFamilyRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->GetFromFamily(rest_context, request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
ImagesRestMetadata::GetIamPolicy(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::images::v1::GetIamPolicyRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->GetIamPolicy(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ImagesRestMetadata::AsyncInsertImages(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::images::v1::InsertImagesRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncInsertImages(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::ImageList>
ImagesRestMetadata::ListImages(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::images::v1::ListImagesRequest const& request) {
  SetMetadata(rest_context);
  return child_->ListImages(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ImagesRestMetadata::AsyncPatchImages(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::images::v1::PatchImagesRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncPatchImages(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
ImagesRestMetadata::SetIamPolicy(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::images::v1::SetIamPolicyRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->SetIamPolicy(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ImagesRestMetadata::AsyncSetLabels(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::images::v1::SetLabelsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncSetLabels(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
ImagesRestMetadata::TestIamPermissions(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::images::v1::TestIamPermissionsRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->TestIamPermissions(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
ImagesRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::
        GetGlobalOperationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncGetOperation(cq, std::move(rest_context), request);
}

future<Status> ImagesRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::
        DeleteGlobalOperationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncCancelOperation(cq, std::move(rest_context), request);
}

void ImagesRestMetadata::SetMetadata(rest_internal::RestContext& rest_context,
                                     std::vector<std::string> const& params) {
  rest_context.AddHeader("x-goog-api-client", api_client_header_);
  if (!params.empty()) {
    rest_context.AddHeader("x-goog-request-params", absl::StrJoin(params, "&"));
  }
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    rest_context.AddHeader("x-goog-user-project",
                           options.get<UserProjectOption>());
  }
  if (options.has<google::cloud::QuotaUserOption>()) {
    rest_context.AddHeader("x-goog-quota-user",
                           options.get<google::cloud::QuotaUserOption>());
  }
  if (options.has<google::cloud::ServerTimeoutOption>()) {
    auto ms_rep = absl::StrCat(
        absl::Dec(options.get<google::cloud::ServerTimeoutOption>().count(),
                  absl::kZeroPad4));
    rest_context.AddHeader("x-server-timeout",
                           ms_rep.insert(ms_rep.size() - 3, "."));
  }
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_images_v1_internal
}  // namespace cloud
}  // namespace google
