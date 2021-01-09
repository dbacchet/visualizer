// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_ULTRASONICMEASUREMENT_RHMSG_H_
#define FLATBUFFERS_GENERATED_ULTRASONICMEASUREMENT_RHMSG_H_

#include "flatbuffers/flatbuffers.h"

#include "header_generated.h"

namespace RHMsg {

struct UltrasonicMeasurement;

struct UltrasonicMeasurement FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_HEADER = 4,
    VT_RANGE = 6,
    VT_VALID = 8
  };
  const HeaderData *header() const {
    return GetPointer<const HeaderData *>(VT_HEADER);
  }
  float range() const {
    return GetField<float>(VT_RANGE, 0.0f);
  }
  bool valid() const {
    return GetField<uint8_t>(VT_VALID, 0) != 0;
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_HEADER) &&
           verifier.VerifyTable(header()) &&
           VerifyField<float>(verifier, VT_RANGE) &&
           VerifyField<uint8_t>(verifier, VT_VALID) &&
           verifier.EndTable();
  }
};

struct UltrasonicMeasurementBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_header(flatbuffers::Offset<HeaderData> header) {
    fbb_.AddOffset(UltrasonicMeasurement::VT_HEADER, header);
  }
  void add_range(float range) {
    fbb_.AddElement<float>(UltrasonicMeasurement::VT_RANGE, range, 0.0f);
  }
  void add_valid(bool valid) {
    fbb_.AddElement<uint8_t>(UltrasonicMeasurement::VT_VALID, static_cast<uint8_t>(valid), 0);
  }
  UltrasonicMeasurementBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  UltrasonicMeasurementBuilder &operator=(const UltrasonicMeasurementBuilder &);
  flatbuffers::Offset<UltrasonicMeasurement> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<UltrasonicMeasurement>(end);
    return o;
  }
};

inline flatbuffers::Offset<UltrasonicMeasurement> CreateUltrasonicMeasurement(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<HeaderData> header = 0,
    float range = 0.0f,
    bool valid = false) {
  UltrasonicMeasurementBuilder builder_(_fbb);
  builder_.add_range(range);
  builder_.add_header(header);
  builder_.add_valid(valid);
  return builder_.Finish();
}

inline const RHMsg::UltrasonicMeasurement *GetUltrasonicMeasurement(const void *buf) {
  return flatbuffers::GetRoot<RHMsg::UltrasonicMeasurement>(buf);
}

inline bool VerifyUltrasonicMeasurementBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<RHMsg::UltrasonicMeasurement>(nullptr);
}

inline void FinishUltrasonicMeasurementBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<RHMsg::UltrasonicMeasurement> root) {
  fbb.Finish(root);
}

}  // namespace RHMsg

#endif  // FLATBUFFERS_GENERATED_ULTRASONICMEASUREMENT_RHMSG_H_
