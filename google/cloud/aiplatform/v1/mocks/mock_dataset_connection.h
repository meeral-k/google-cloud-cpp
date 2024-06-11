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
// source: google/cloud/aiplatform/v1/dataset_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MOCKS_MOCK_DATASET_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MOCKS_MOCK_DATASET_CONNECTION_H

#include "google/cloud/aiplatform/v1/dataset_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace aiplatform_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `DatasetServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `DatasetServiceClient`. To do so,
 * construct an object of type `DatasetServiceClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockDatasetServiceConnection
    : public aiplatform_v1::DatasetServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::Dataset>>, CreateDataset,
      (google::cloud::aiplatform::v1::CreateDatasetRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::aiplatform::v1::Dataset>, GetDataset,
              (google::cloud::aiplatform::v1::GetDatasetRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::Dataset>, UpdateDataset,
      (google::cloud::aiplatform::v1::UpdateDatasetRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::aiplatform::v1::Dataset>),
              ListDatasets,
              (google::cloud::aiplatform::v1::ListDatasetsRequest request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteDataset,
      (google::cloud::aiplatform::v1::DeleteDatasetRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::ImportDataResponse>>,
      ImportData,
      (google::cloud::aiplatform::v1::ImportDataRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::ExportDataResponse>>,
      ExportData,
      (google::cloud::aiplatform::v1::ExportDataRequest const& request),
      (override));

  MOCK_METHOD(future<StatusOr<google::cloud::aiplatform::v1::DatasetVersion>>,
              CreateDatasetVersion,
              (google::cloud::aiplatform::v1::CreateDatasetVersionRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::aiplatform::v1::DatasetVersion>,
              UpdateDatasetVersion,
              (google::cloud::aiplatform::v1::UpdateDatasetVersionRequest const&
                   request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteDatasetVersion,
      (google::cloud::aiplatform::v1::DeleteDatasetVersionRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::DatasetVersion>,
      GetDatasetVersion,
      (google::cloud::aiplatform::v1::GetDatasetVersionRequest const& request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::aiplatform::v1::DatasetVersion>),
      ListDatasetVersions,
      (google::cloud::aiplatform::v1::ListDatasetVersionsRequest request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DatasetVersion>>,
      RestoreDatasetVersion,
      (google::cloud::aiplatform::v1::RestoreDatasetVersionRequest const&
           request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::aiplatform::v1::DataItem>),
              ListDataItems,
              (google::cloud::aiplatform::v1::ListDataItemsRequest request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::aiplatform::v1::DataItemView>),
              SearchDataItems,
              (google::cloud::aiplatform::v1::SearchDataItemsRequest request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::aiplatform::v1::SavedQuery>),
              ListSavedQueries,
              (google::cloud::aiplatform::v1::ListSavedQueriesRequest request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>,
      DeleteSavedQuery,
      (google::cloud::aiplatform::v1::DeleteSavedQueryRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::aiplatform::v1::AnnotationSpec>,
      GetAnnotationSpec,
      (google::cloud::aiplatform::v1::GetAnnotationSpecRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::aiplatform::v1::Annotation>),
              ListAnnotations,
              (google::cloud::aiplatform::v1::ListAnnotationsRequest request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_MOCKS_MOCK_DATASET_CONNECTION_H
