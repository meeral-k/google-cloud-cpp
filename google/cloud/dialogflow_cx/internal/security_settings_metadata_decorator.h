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
// source: google/cloud/dialogflow/cx/v3/security_settings.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_SECURITY_SETTINGS_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_SECURITY_SETTINGS_METADATA_DECORATOR_H

#include "google/cloud/dialogflow_cx/internal/security_settings_stub.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SecuritySettingsServiceMetadata : public SecuritySettingsServiceStub {
 public:
  ~SecuritySettingsServiceMetadata() override = default;
  SecuritySettingsServiceMetadata(
      std::shared_ptr<SecuritySettingsServiceStub> child,
      std::multimap<std::string, std::string> fixed_metadata,
      std::string api_client_header = "");

  StatusOr<google::cloud::dialogflow::cx::v3::SecuritySettings>
  CreateSecuritySettings(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::CreateSecuritySettingsRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::cx::v3::SecuritySettings>
  GetSecuritySettings(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::GetSecuritySettingsRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::cx::v3::SecuritySettings>
  UpdateSecuritySettings(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::UpdateSecuritySettingsRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::cx::v3::ListSecuritySettingsResponse>
  ListSecuritySettings(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::ListSecuritySettingsRequest const&
          request) override;

  Status DeleteSecuritySettings(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::DeleteSecuritySettingsRequest const&
          request) override;

 private:
  void SetMetadata(grpc::ClientContext& context,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context);

  std::shared_ptr<SecuritySettingsServiceStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_SECURITY_SETTINGS_METADATA_DECORATOR_H
