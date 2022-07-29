// Copyright 2021 Google LLC
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
// source: google/logging/v2/logging.proto

#include "google/cloud/logging/logging_service_v2_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace logging {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

LoggingServiceV2Client::LoggingServiceV2Client(
    std::shared_ptr<LoggingServiceV2Connection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
LoggingServiceV2Client::~LoggingServiceV2Client() = default;

Status LoggingServiceV2Client::DeleteLog(std::string const& log_name,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::logging::v2::DeleteLogRequest request;
  request.set_log_name(log_name);
  return connection_->DeleteLog(request);
}

Status LoggingServiceV2Client::DeleteLog(
    google::logging::v2::DeleteLogRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteLog(request);
}

StatusOr<google::logging::v2::WriteLogEntriesResponse>
LoggingServiceV2Client::WriteLogEntries(
    std::string const& log_name, google::api::MonitoredResource const& resource,
    std::map<std::string, std::string> const& labels,
    std::vector<google::logging::v2::LogEntry> const& entries, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::logging::v2::WriteLogEntriesRequest request;
  request.set_log_name(log_name);
  *request.mutable_resource() = resource;
  *request.mutable_labels() = {labels.begin(), labels.end()};
  *request.mutable_entries() = {entries.begin(), entries.end()};
  return connection_->WriteLogEntries(request);
}

StatusOr<google::logging::v2::WriteLogEntriesResponse>
LoggingServiceV2Client::WriteLogEntries(
    google::logging::v2::WriteLogEntriesRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->WriteLogEntries(request);
}

StreamRange<google::logging::v2::LogEntry>
LoggingServiceV2Client::ListLogEntries(
    std::vector<std::string> const& resource_names, std::string const& filter,
    std::string const& order_by, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::logging::v2::ListLogEntriesRequest request;
  *request.mutable_resource_names() = {resource_names.begin(),
                                       resource_names.end()};
  request.set_filter(filter);
  request.set_order_by(order_by);
  return connection_->ListLogEntries(request);
}

StreamRange<google::logging::v2::LogEntry>
LoggingServiceV2Client::ListLogEntries(
    google::logging::v2::ListLogEntriesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListLogEntries(std::move(request));
}

StreamRange<google::api::MonitoredResourceDescriptor>
LoggingServiceV2Client::ListMonitoredResourceDescriptors(
    google::logging::v2::ListMonitoredResourceDescriptorsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListMonitoredResourceDescriptors(std::move(request));
}

StreamRange<std::string> LoggingServiceV2Client::ListLogs(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::logging::v2::ListLogsRequest request;
  request.set_parent(parent);
  return connection_->ListLogs(request);
}

StreamRange<std::string> LoggingServiceV2Client::ListLogs(
    google::logging::v2::ListLogsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListLogs(std::move(request));
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::logging::v2::TailLogEntriesRequest,
    google::logging::v2::TailLogEntriesResponse>>
LoggingServiceV2Client::AsyncTailLogEntries(ExperimentalTag tag, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AsyncTailLogEntries(std::move(tag));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace logging
}  // namespace cloud
}  // namespace google
