// Copyright The OpenTelemetry Authors
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "opentelemetry/version.h"

#include "opentelemetry/exporters/otlp/otlp_file_client_options.h"
#include "opentelemetry/exporters/otlp/otlp_preferred_temporality.h"

OPENTELEMETRY_BEGIN_NAMESPACE
namespace exporter
{
namespace otlp
{

/**
 * Struct to hold OTLP File metrics exporter options.
 *
 * See
 * https://github.com/open-telemetry/opentelemetry-specification/blob/main/specification/protocol/file-exporter.md
 */
struct OPENTELEMETRY_EXPORT OtlpFileMetricExporterOptions : public OtlpFileClientOptions
{
  OtlpFileMetricExporterOptions();

  PreferredAggregationTemporality aggregation_temporality;
};

}  // namespace otlp
}  // namespace exporter
OPENTELEMETRY_END_NAMESPACE
