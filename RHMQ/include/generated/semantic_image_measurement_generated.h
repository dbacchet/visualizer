// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_SEMANTICIMAGEMEASUREMENT_RHMSG_H_
#define FLATBUFFERS_GENERATED_SEMANTICIMAGEMEASUREMENT_RHMSG_H_

#include "flatbuffers/flatbuffers.h"

#include "header_generated.h"

namespace RHMsg {

struct SemanticImageMeasurement;

struct SemanticImageMeasurement FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_HEADER = 4,
    VT_VALUES = 6,
    VT_ENCODING = 8,
    VT_WIDTH = 10,
    VT_HEIGHT = 12
  };
  const HeaderData *header() const {
    return GetPointer<const HeaderData *>(VT_HEADER);
  }
  const flatbuffers::Vector<uint8_t> *values() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_VALUES);
  }
  const flatbuffers::String *encoding() const {
    return GetPointer<const flatbuffers::String *>(VT_ENCODING);
  }
  int32_t width() const {
    return GetField<int32_t>(VT_WIDTH, 0);
  }
  int32_t height() const {
    return GetField<int32_t>(VT_HEIGHT, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_HEADER) &&
           verifier.VerifyTable(header()) &&
           VerifyOffset(verifier, VT_VALUES) &&
           verifier.Verify(values()) &&
           VerifyOffset(verifier, VT_ENCODING) &&
           verifier.Verify(encoding()) &&
           VerifyField<int32_t>(verifier, VT_WIDTH) &&
           VerifyField<int32_t>(verifier, VT_HEIGHT) &&
           verifier.EndTable();
  }
};

struct SemanticImageMeasurementBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_header(flatbuffers::Offset<HeaderData> header) {
    fbb_.AddOffset(SemanticImageMeasurement::VT_HEADER, header);
  }
  void add_values(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> values) {
    fbb_.AddOffset(SemanticImageMeasurement::VT_VALUES, values);
  }
  void add_encoding(flatbuffers::Offset<flatbuffers::String> encoding) {
    fbb_.AddOffset(SemanticImageMeasurement::VT_ENCODING, encoding);
  }
  void add_width(int32_t width) {
    fbb_.AddElement<int32_t>(SemanticImageMeasurement::VT_WIDTH, width, 0);
  }
  void add_height(int32_t height) {
    fbb_.AddElement<int32_t>(SemanticImageMeasurement::VT_HEIGHT, height, 0);
  }
  SemanticImageMeasurementBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  SemanticImageMeasurementBuilder &operator=(const SemanticImageMeasurementBuilder &);
  flatbuffers::Offset<SemanticImageMeasurement> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<SemanticImageMeasurement>(end);
    return o;
  }
};

inline flatbuffers::Offset<SemanticImageMeasurement> CreateSemanticImageMeasurement(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<HeaderData> header = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> values = 0,
    flatbuffers::Offset<flatbuffers::String> encoding = 0,
    int32_t width = 0,
    int32_t height = 0) {
  SemanticImageMeasurementBuilder builder_(_fbb);
  builder_.add_height(height);
  builder_.add_width(width);
  builder_.add_encoding(encoding);
  builder_.add_values(values);
  builder_.add_header(header);
  return builder_.Finish();
}

inline flatbuffers::Offset<SemanticImageMeasurement> CreateSemanticImageMeasurementDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<HeaderData> header = 0,
    const std::vector<uint8_t> *values = nullptr,
    const char *encoding = nullptr,
    int32_t width = 0,
    int32_t height = 0) {
  return RHMsg::CreateSemanticImageMeasurement(
      _fbb,
      header,
      values ? _fbb.CreateVector<uint8_t>(*values) : 0,
      encoding ? _fbb.CreateString(encoding) : 0,
      width,
      height);
}

inline const RHMsg::SemanticImageMeasurement *GetSemanticImageMeasurement(const void *buf) {
  return flatbuffers::GetRoot<RHMsg::SemanticImageMeasurement>(buf);
}

inline bool VerifySemanticImageMeasurementBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<RHMsg::SemanticImageMeasurement>(nullptr);
}

inline void FinishSemanticImageMeasurementBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<RHMsg::SemanticImageMeasurement> root) {
  fbb.Finish(root);
}

}  // namespace RHMsg

#endif  // FLATBUFFERS_GENERATED_SEMANTICIMAGEMEASUREMENT_RHMSG_H_
