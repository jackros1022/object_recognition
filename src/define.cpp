#include "define.h"

const Eigen::Vector4f SUBSAMPLING_LEAF_SIZE (0.01f, 0.01f, 0.01f, 0.00f);
std::string oni_file;

//Algorithm params
float model_ss (0.005);
float scene_ss (0.005);
float rf_rad (0.02);
float descr_rad (0.05);
float cg_size (0.007);
float cg_thresh (6.0f);
float sac_seg_iter (1000);
float reg_sampling_rate (10);
float sac_seg_distance (0.05);
float reg_clustering_threshold (0.2);
float max_inliers (40000);
float min_scale (0.01);
float min_contrast (0.1f);
float support_size (0.02);
float filter_intensity (0.04);
float descriptor_distance (0.25);
float segmentation_threshold (0.01);
float normal_estimation_search_radius (0.05);
int segmentation_iterations (1000);
int n_octaves (3);
int n_scales_per_octave (2);
int random_scene_samples (1000);
int random_model_samples (1000);
int distance (900);  //kinect cut-off distance
int harris_type (1);
int device_num (0);
bool narf (false);
bool random_points (false);
bool sift (false);
bool harris (false);
bool fpfh (false);
bool pfh (false);
bool pfhrgb (false);
bool ppf (false);
bool ppfrgb (false);
bool shot (false);
bool ransac (false);
bool ppfe (false);
bool first (true);
bool show_keypoints (false);
bool show_correspondences (true);
bool use_hough (true);
bool to_filter (false);
bool show_filtered (false);
bool remove_outliers (false);
bool use_icp (false);
bool segment (false);
bool error_log(false);
bool use_generalized_icp(false);