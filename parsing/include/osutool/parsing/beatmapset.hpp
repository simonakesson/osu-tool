#pragma once

#include <vector>
#include <string>
#include <boost/filesystem.hpp>
#include "beatmap.hpp"

namespace osutool {
namespace parsing {

class BeatmapSet {
public:
    BeatmapSet();

    BeatmapSet(const boost::filesystem::path &);

    void load(const boost::filesystem::path &);

    const std::string &getTitle() const;

    const std::string &getArtist() const;

    const std::vector<Beatmap> &getBeatmaps() const;

private:
    std::string mTitle;
    std::string mArtist;
    std::vector<Beatmap> mBeatmaps;
};

std::vector<BeatmapSet> getBeatmapSets(const boost::filesystem::path &beatmapSetDir);

}
}
