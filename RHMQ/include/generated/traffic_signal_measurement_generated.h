// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_TRAFFICSIGNALMEASUREMENT_RHMSG_H_
#define FLATBUFFERS_GENERATED_TRAFFICSIGNALMEASUREMENT_RHMSG_H_

#include "flatbuffers/flatbuffers.h"

#include "header_generated.h"

namespace RHMsg {

struct TrafficSignals;

enum TrafficSignalState {
  TrafficSignalState_off = 1,
  TrafficSignalState_red = 2,
  TrafficSignalState_yellow = 3,
  TrafficSignalState_green = 4,
  TrafficSignalState_red_left = 5,
  TrafficSignalState_yellow_left = 6,
  TrafficSignalState_green_left = 7,
  TrafficSignalState_red_right = 8,
  TrafficSignalState_yellow_right = 9,
  TrafficSignalState_green_right = 10,
  TrafficSignalState_red_up = 11,
  TrafficSignalState_yellow_up = 12,
  TrafficSignalState_green_up = 13,
  TrafficSignalState_red_flashing = 14,
  TrafficSignalState_yellow_flashing = 15,
  TrafficSignalState_MIN = TrafficSignalState_off,
  TrafficSignalState_MAX = TrafficSignalState_yellow_flashing
};

inline TrafficSignalState (&EnumValuesTrafficSignalState())[15] {
  static TrafficSignalState values[] = {
    TrafficSignalState_off,
    TrafficSignalState_red,
    TrafficSignalState_yellow,
    TrafficSignalState_green,
    TrafficSignalState_red_left,
    TrafficSignalState_yellow_left,
    TrafficSignalState_green_left,
    TrafficSignalState_red_right,
    TrafficSignalState_yellow_right,
    TrafficSignalState_green_right,
    TrafficSignalState_red_up,
    TrafficSignalState_yellow_up,
    TrafficSignalState_green_up,
    TrafficSignalState_red_flashing,
    TrafficSignalState_yellow_flashing
  };
  return values;
}

inline const char **EnumNamesTrafficSignalState() {
  static const char *names[] = {
    "off",
    "red",
    "yellow",
    "green",
    "red_left",
    "yellow_left",
    "green_left",
    "red_right",
    "yellow_right",
    "green_right",
    "red_up",
    "yellow_up",
    "green_up",
    "red_flashing",
    "yellow_flashing",
    nullptr
  };
  return names;
}

inline const char *EnumNameTrafficSignalState(TrafficSignalState e) {
  const size_t index = static_cast<int>(e) - static_cast<int>(TrafficSignalState_off);
  return EnumNamesTrafficSignalState()[index];
}

struct TrafficSignals FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_HEADER = 4,
    VT_NAMES = 6,
    VT_STATES = 8
  };
  const HeaderData *header() const {
    return GetPointer<const HeaderData *>(VT_HEADER);
  }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *names() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_NAMES);
  }
  const flatbuffers::Vector<int8_t> *states() const {
    return GetPointer<const flatbuffers::Vector<int8_t> *>(VT_STATES);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_HEADER) &&
           verifier.VerifyTable(header()) &&
           VerifyOffset(verifier, VT_NAMES) &&
           verifier.Verify(names()) &&
           verifier.VerifyVectorOfStrings(names()) &&
           VerifyOffset(verifier, VT_STATES) &&
           verifier.Verify(states()) &&
           verifier.EndTable();
  }
};

struct TrafficSignalsBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_header(flatbuffers::Offset<HeaderData> header) {
    fbb_.AddOffset(TrafficSignals::VT_HEADER, header);
  }
  void add_names(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> names) {
    fbb_.AddOffset(TrafficSignals::VT_NAMES, names);
  }
  void add_states(flatbuffers::Offset<flatbuffers::Vector<int8_t>> states) {
    fbb_.AddOffset(TrafficSignals::VT_STATES, states);
  }
  TrafficSignalsBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  TrafficSignalsBuilder &operator=(const TrafficSignalsBuilder &);
  flatbuffers::Offset<TrafficSignals> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<TrafficSignals>(end);
    return o;
  }
};

inline flatbuffers::Offset<TrafficSignals> CreateTrafficSignals(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<HeaderData> header = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> names = 0,
    flatbuffers::Offset<flatbuffers::Vector<int8_t>> states = 0) {
  TrafficSignalsBuilder builder_(_fbb);
  builder_.add_states(states);
  builder_.add_names(names);
  builder_.add_header(header);
  return builder_.Finish();
}

inline flatbuffers::Offset<TrafficSignals> CreateTrafficSignalsDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<HeaderData> header = 0,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *names = nullptr,
    const std::vector<int8_t> *states = nullptr) {
  return RHMsg::CreateTrafficSignals(
      _fbb,
      header,
      names ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*names) : 0,
      states ? _fbb.CreateVector<int8_t>(*states) : 0);
}

inline const RHMsg::TrafficSignals *GetTrafficSignals(const void *buf) {
  return flatbuffers::GetRoot<RHMsg::TrafficSignals>(buf);
}

inline bool VerifyTrafficSignalsBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<RHMsg::TrafficSignals>(nullptr);
}

inline void FinishTrafficSignalsBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<RHMsg::TrafficSignals> root) {
  fbb.Finish(root);
}

}  // namespace RHMsg

#endif  // FLATBUFFERS_GENERATED_TRAFFICSIGNALMEASUREMENT_RHMSG_H_
