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
// source: google/cloud/dialogflow/cx/v3/test_case.proto

#include "google/cloud/dialogflow_cx/test_cases_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TestCasesClient::TestCasesClient(
    std::shared_ptr<TestCasesConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
TestCasesClient::~TestCasesClient() = default;

StreamRange<google::cloud::dialogflow::cx::v3::TestCase>
TestCasesClient::ListTestCases(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::cx::v3::ListTestCasesRequest request;
  request.set_parent(parent);
  return connection_->ListTestCases(request);
}

StreamRange<google::cloud::dialogflow::cx::v3::TestCase>
TestCasesClient::ListTestCases(
    google::cloud::dialogflow::cx::v3::ListTestCasesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListTestCases(std::move(request));
}

Status TestCasesClient::BatchDeleteTestCases(std::string const& parent,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::cx::v3::BatchDeleteTestCasesRequest request;
  request.set_parent(parent);
  return connection_->BatchDeleteTestCases(request);
}

Status TestCasesClient::BatchDeleteTestCases(
    google::cloud::dialogflow::cx::v3::BatchDeleteTestCasesRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchDeleteTestCases(request);
}

StatusOr<google::cloud::dialogflow::cx::v3::TestCase>
TestCasesClient::GetTestCase(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::cx::v3::GetTestCaseRequest request;
  request.set_name(name);
  return connection_->GetTestCase(request);
}

StatusOr<google::cloud::dialogflow::cx::v3::TestCase>
TestCasesClient::GetTestCase(
    google::cloud::dialogflow::cx::v3::GetTestCaseRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetTestCase(request);
}

StatusOr<google::cloud::dialogflow::cx::v3::TestCase>
TestCasesClient::CreateTestCase(
    std::string const& parent,
    google::cloud::dialogflow::cx::v3::TestCase const& test_case,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::cx::v3::CreateTestCaseRequest request;
  request.set_parent(parent);
  *request.mutable_test_case() = test_case;
  return connection_->CreateTestCase(request);
}

StatusOr<google::cloud::dialogflow::cx::v3::TestCase>
TestCasesClient::CreateTestCase(
    google::cloud::dialogflow::cx::v3::CreateTestCaseRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateTestCase(request);
}

StatusOr<google::cloud::dialogflow::cx::v3::TestCase>
TestCasesClient::UpdateTestCase(
    google::cloud::dialogflow::cx::v3::TestCase const& test_case,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::cx::v3::UpdateTestCaseRequest request;
  *request.mutable_test_case() = test_case;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateTestCase(request);
}

StatusOr<google::cloud::dialogflow::cx::v3::TestCase>
TestCasesClient::UpdateTestCase(
    google::cloud::dialogflow::cx::v3::UpdateTestCaseRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateTestCase(request);
}

future<StatusOr<google::cloud::dialogflow::cx::v3::RunTestCaseResponse>>
TestCasesClient::RunTestCase(
    google::cloud::dialogflow::cx::v3::RunTestCaseRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->RunTestCase(request);
}

future<StatusOr<google::cloud::dialogflow::cx::v3::BatchRunTestCasesResponse>>
TestCasesClient::BatchRunTestCases(
    google::cloud::dialogflow::cx::v3::BatchRunTestCasesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchRunTestCases(request);
}

StatusOr<google::cloud::dialogflow::cx::v3::CalculateCoverageResponse>
TestCasesClient::CalculateCoverage(
    google::cloud::dialogflow::cx::v3::CalculateCoverageRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CalculateCoverage(request);
}

future<StatusOr<google::cloud::dialogflow::cx::v3::ImportTestCasesResponse>>
TestCasesClient::ImportTestCases(
    google::cloud::dialogflow::cx::v3::ImportTestCasesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ImportTestCases(request);
}

future<StatusOr<google::cloud::dialogflow::cx::v3::ExportTestCasesResponse>>
TestCasesClient::ExportTestCases(
    google::cloud::dialogflow::cx::v3::ExportTestCasesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ExportTestCases(request);
}

StreamRange<google::cloud::dialogflow::cx::v3::TestCaseResult>
TestCasesClient::ListTestCaseResults(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::cx::v3::ListTestCaseResultsRequest request;
  request.set_parent(parent);
  return connection_->ListTestCaseResults(request);
}

StreamRange<google::cloud::dialogflow::cx::v3::TestCaseResult>
TestCasesClient::ListTestCaseResults(
    google::cloud::dialogflow::cx::v3::ListTestCaseResultsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListTestCaseResults(std::move(request));
}

StatusOr<google::cloud::dialogflow::cx::v3::TestCaseResult>
TestCasesClient::GetTestCaseResult(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::cx::v3::GetTestCaseResultRequest request;
  request.set_name(name);
  return connection_->GetTestCaseResult(request);
}

StatusOr<google::cloud::dialogflow::cx::v3::TestCaseResult>
TestCasesClient::GetTestCaseResult(
    google::cloud::dialogflow::cx::v3::GetTestCaseResultRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetTestCaseResult(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google
