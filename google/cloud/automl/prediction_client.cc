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
// source: google/cloud/automl/v1/prediction_service.proto

#include "google/cloud/automl/prediction_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace automl {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PredictionServiceClient::PredictionServiceClient(
    std::shared_ptr<PredictionServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
PredictionServiceClient::~PredictionServiceClient() = default;

StatusOr<google::cloud::automl::v1::PredictResponse>
PredictionServiceClient::Predict(
    std::string const& name,
    google::cloud::automl::v1::ExamplePayload const& payload,
    std::map<std::string, std::string> const& params, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::automl::v1::PredictRequest request;
  request.set_name(name);
  *request.mutable_payload() = payload;
  *request.mutable_params() = {params.begin(), params.end()};
  return connection_->Predict(request);
}

StatusOr<google::cloud::automl::v1::PredictResponse>
PredictionServiceClient::Predict(
    google::cloud::automl::v1::PredictRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->Predict(request);
}

future<StatusOr<google::cloud::automl::v1::BatchPredictResult>>
PredictionServiceClient::BatchPredict(
    std::string const& name,
    google::cloud::automl::v1::BatchPredictInputConfig const& input_config,
    google::cloud::automl::v1::BatchPredictOutputConfig const& output_config,
    std::map<std::string, std::string> const& params, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::automl::v1::BatchPredictRequest request;
  request.set_name(name);
  *request.mutable_input_config() = input_config;
  *request.mutable_output_config() = output_config;
  *request.mutable_params() = {params.begin(), params.end()};
  return connection_->BatchPredict(request);
}

future<StatusOr<google::cloud::automl::v1::BatchPredictResult>>
PredictionServiceClient::BatchPredict(
    google::cloud::automl::v1::BatchPredictRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchPredict(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace automl
}  // namespace cloud
}  // namespace google
