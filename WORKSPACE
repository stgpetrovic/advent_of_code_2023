load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
  name = "com_google_absl",
  urls = ["https://github.com/abseil/abseil-cpp/archive/master.zip"],
  strip_prefix = "abseil-cpp-master",
)

http_archive(
  name = "rules_cc",
  urls = ["https://github.com/bazelbuild/rules_cc/archive/262ebec3c2296296526740db4aefce68c80de7fa.zip"],
  strip_prefix = "rules_cc-262ebec3c2296296526740db4aefce68c80de7fa",
  sha256 = "9a446e9dd9c1bb180c86977a8dc1e9e659550ae732ae58bd2e8fd51e15b2c91d"
)

http_archive(
  name = "com_google_googletest",
  urls = ["https://github.com/google/googletest/archive/011959aafddcd30611003de96cfd8d7a7685c700.zip"],
  strip_prefix = "googletest-011959aafddcd30611003de96cfd8d7a7685c700",
)

http_archive(
  name = "com_github_gflags_gflags",
  sha256 = "34af2f15cf7367513b352bdcd2493ab14ce43692d2dcd9dfc499492966c64dcf",
  strip_prefix = "gflags-2.2.2",
  urls = ["https://github.com/gflags/gflags/archive/v2.2.2.tar.gz"],
)

http_archive(
  name = "com_github_google_glog",
  sha256 = "62efeb57ff70db9ea2129a16d0f908941e355d09d6d83c9f7b18557c0a7ab59e",
  strip_prefix = "glog-d516278b1cd33cd148e8989aec488b6049a4ca0b",
  urls = ["https://github.com/google/glog/archive/d516278b1cd33cd148e8989aec488b6049a4ca0b.zip"],
)

# Bazel Skylib.
http_archive(
  name = "bazel_skylib",  # 2023-05-31T19:24:07Z
  sha256 = "08c0386f45821ce246bbbf77503c973246ed6ee5c3463e41efc197fa9bc3a7f4",
  strip_prefix = "bazel-skylib-288731ef9f7f688932bd50e704a91a45ec185f9b",
  urls = ["https://github.com/bazelbuild/bazel-skylib/archive/288731ef9f7f688932bd50e704a91a45ec185f9b.zip"],
)

# Bazel platform rules.
http_archive(
    name = "platforms",  # 2023-07-28T19:44:27Z
    sha256 = "40eb313613ff00a5c03eed20aba58890046f4d38dec7344f00bb9a8867853526",
    strip_prefix = "platforms-4ad40ef271da8176d4fc0194d2089b8a76e19d7b",
    urls = ["https://github.com/bazelbuild/platforms/archive/4ad40ef271da8176d4fc0194d2089b8a76e19d7b.zip"],
)
