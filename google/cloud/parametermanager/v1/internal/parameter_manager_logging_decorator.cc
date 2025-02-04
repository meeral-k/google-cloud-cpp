// Copyright 2025 Google LLC
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
// source: google/cloud/parametermanager/v1/service.proto

#include "google/cloud/parametermanager/v1/internal/parameter_manager_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/parametermanager/v1/service.grpc.pb.h>
#include <memory>
#include <set>
#include <string>
#include <utility>

namespace google {
namespace cloud {
namespace parametermanager_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ParameterManagerLogging::ParameterManagerLogging(
    std::shared_ptr<ParameterManagerStub> child, TracingOptions tracing_options,
    std::set<std::string> const&)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)) {}

StatusOr<google::cloud::parametermanager::v1::ListParametersResponse>
ParameterManagerLogging::ListParameters(
    grpc::ClientContext& context, Options const& options,
    google::cloud::parametermanager::v1::ListParametersRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::parametermanager::v1::ListParametersRequest const&
                 request) {
        return child_->ListParameters(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::parametermanager::v1::Parameter>
ParameterManagerLogging::GetParameter(
    grpc::ClientContext& context, Options const& options,
    google::cloud::parametermanager::v1::GetParameterRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::parametermanager::v1::GetParameterRequest const&
                 request) {
        return child_->GetParameter(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::parametermanager::v1::Parameter>
ParameterManagerLogging::CreateParameter(
    grpc::ClientContext& context, Options const& options,
    google::cloud::parametermanager::v1::CreateParameterRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::parametermanager::v1::CreateParameterRequest const&
                 request) {
        return child_->CreateParameter(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::parametermanager::v1::Parameter>
ParameterManagerLogging::UpdateParameter(
    grpc::ClientContext& context, Options const& options,
    google::cloud::parametermanager::v1::UpdateParameterRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::parametermanager::v1::UpdateParameterRequest const&
                 request) {
        return child_->UpdateParameter(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status ParameterManagerLogging::DeleteParameter(
    grpc::ClientContext& context, Options const& options,
    google::cloud::parametermanager::v1::DeleteParameterRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::parametermanager::v1::DeleteParameterRequest const&
                 request) {
        return child_->DeleteParameter(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::parametermanager::v1::ListParameterVersionsResponse>
ParameterManagerLogging::ListParameterVersions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::parametermanager::v1::ListParameterVersionsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::parametermanager::v1::
                 ListParameterVersionsRequest const& request) {
        return child_->ListParameterVersions(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::parametermanager::v1::ParameterVersion>
ParameterManagerLogging::GetParameterVersion(
    grpc::ClientContext& context, Options const& options,
    google::cloud::parametermanager::v1::GetParameterVersionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::parametermanager::v1::GetParameterVersionRequest const&
              request) {
        return child_->GetParameterVersion(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::parametermanager::v1::RenderParameterVersionResponse>
ParameterManagerLogging::RenderParameterVersion(
    grpc::ClientContext& context, Options const& options,
    google::cloud::parametermanager::v1::RenderParameterVersionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::parametermanager::v1::
                 RenderParameterVersionRequest const& request) {
        return child_->RenderParameterVersion(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::parametermanager::v1::ParameterVersion>
ParameterManagerLogging::CreateParameterVersion(
    grpc::ClientContext& context, Options const& options,
    google::cloud::parametermanager::v1::CreateParameterVersionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::parametermanager::v1::
                 CreateParameterVersionRequest const& request) {
        return child_->CreateParameterVersion(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::parametermanager::v1::ParameterVersion>
ParameterManagerLogging::UpdateParameterVersion(
    grpc::ClientContext& context, Options const& options,
    google::cloud::parametermanager::v1::UpdateParameterVersionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::parametermanager::v1::
                 UpdateParameterVersionRequest const& request) {
        return child_->UpdateParameterVersion(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

Status ParameterManagerLogging::DeleteParameterVersion(
    grpc::ClientContext& context, Options const& options,
    google::cloud::parametermanager::v1::DeleteParameterVersionRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::parametermanager::v1::
                 DeleteParameterVersionRequest const& request) {
        return child_->DeleteParameterVersion(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::location::ListLocationsResponse>
ParameterManagerLogging::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::location::ListLocationsRequest const& request) {
        return child_->ListLocations(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::location::Location>
ParameterManagerLogging::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::location::GetLocationRequest const& request) {
        return child_->GetLocation(context, options, request);
      },
      context, options, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace parametermanager_v1_internal
}  // namespace cloud
}  // namespace google
