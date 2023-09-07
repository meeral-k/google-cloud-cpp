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
// source: google/cloud/texttospeech/v1/cloud_tts.proto

#include "google/cloud/texttospeech/v1/internal/text_to_speech_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/texttospeech/v1/cloud_tts.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace texttospeech_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TextToSpeechMetadata::TextToSpeechMetadata(
    std::shared_ptr<TextToSpeechStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::ApiClientHeader("generator")
              : std::move(api_client_header)) {}

StatusOr<google::cloud::texttospeech::v1::ListVoicesResponse>
TextToSpeechMetadata::ListVoices(
    grpc::ClientContext& context,
    google::cloud::texttospeech::v1::ListVoicesRequest const& request) {
  SetMetadata(context);
  return child_->ListVoices(context, request);
}

StatusOr<google::cloud::texttospeech::v1::SynthesizeSpeechResponse>
TextToSpeechMetadata::SynthesizeSpeech(
    grpc::ClientContext& context,
    google::cloud::texttospeech::v1::SynthesizeSpeechRequest const& request) {
  SetMetadata(context);
  return child_->SynthesizeSpeech(context, request);
}

void TextToSpeechMetadata::SetMetadata(grpc::ClientContext& context,
                                       std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void TextToSpeechMetadata::SetMetadata(grpc::ClientContext& context) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace texttospeech_v1_internal
}  // namespace cloud
}  // namespace google
