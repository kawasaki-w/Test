// Generated by Apple Swift version 3.1 (swiftlang-802.0.53 clang-802.0.42)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if defined(__has_attribute) && __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import Foundation;
@import CoreGraphics;
@import ObjectiveC;
#endif

#import "/Users/matsukireiya/Documents/開発/ios/omega/ios-sdk/Omega-Keyboard-SDK/Omega-Keyboard-SDK/Omega-Bridge-Header.h"

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIFont;
@class UIColor;
@class NSCoder;
@class UITapGestureRecognizer;

/// 広告表示用のView
/// initの引数に指定した親Viewに上下左右が合うようになっている
SWIFT_CLASS("_TtC16OmegaKeyboardSDK15AdvertisingView")
@interface AdvertisingView : UIView
- (nonnull instancetype)initWithParent:(UIView * _Nonnull)parent repeatMaxCount:(NSInteger)repeatMaxCount font:(UIFont * _Nonnull)font color:(UIColor * _Nonnull)color animationDuration:(double)animationDuration insertDuration:(double)insertDuration OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)setAdvertising:(NSNotification * _Nullable)notification;
- (void)gestureTapped:(UITapGestureRecognizer * _Nonnull)gesture;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC16OmegaKeyboardSDK15FillerAdManager")
@interface FillerAdManager : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) FillerAdManager * _Nonnull sharedInstance;)
+ (FillerAdManager * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
- (void)setAdToken:(NSString * _Nullable)token;
- (void)callGnAd;
- (void)impressionGnAd;
- (void)trackGnAd:(UIView * _Nonnull)view;
@end

@class GNNativeAdRequest;

@interface FillerAdManager (SWIFT_EXTENSION(OmegaKeyboardSDK)) <GNNativeAdRequestDelegate>
- (void)nativeAdRequest:(GNNativeAdRequest * _Null_unspecified)request didFailToReceiveAdsWithError:(NSError * _Null_unspecified)error;
- (void)nativeAdRequestDidReceiveAds:(NSArray * _Null_unspecified)nativeAds;
@end

@class UIInputViewController;

SWIFT_CLASS("_TtC16OmegaKeyboardSDK5Omega")
@interface Omega : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL isSearching;)
+ (BOOL)isSearching SWIFT_WARN_UNUSED_RESULT;
+ (void)setIsSearching:(BOOL)value;
/// SDKの各設定を行う
/// キーボードアプリで呼ぶ
+ (void)setupForKeyboardAppWithInputViewController:(UIInputViewController * _Nullable)vc symbol:(NSString * _Nullable)symbol token:(NSString * _Nullable)token adToken:(NSString * _Nullable)adToken appGroupName:(NSString * _Nullable)appGroupName;
/// SDKの各設定を行う
/// 本体アプリで呼ぶ
+ (void)setupForContainingAppWithSymbol:(NSString * _Nullable)symbol token:(NSString * _Nullable)token adToken:(NSString * _Nullable)adToken appGroupName:(NSString * _Nullable)appGroupName;
/// キーボードでの入力が完了した時に呼ぶ
/// string: ユーザーが入力した文字列
+ (void)input:(NSString * _Nonnull)string;
/// 広告用のViewを返す
/// 引数はデフォルト値が入っているので第一引数のparent以外は省略可
/// parent: このViewをaddSubViewするための親View
+ (AdvertisingView * _Nonnull)advertinsingView:(UIView * _Nonnull)parent repeatMaxCount:(NSInteger)repeatMaxCount font:(UIFont * _Nonnull)font color:(UIColor * _Nonnull)color animationDuration:(double)animationDuration insertDuration:(double)insertDuration SWIFT_WARN_UNUSED_RESULT;
/// OMEGAアナリティクスの各設定を行う
/// 本体アプリで呼ぶ
+ (void)setIDFVWithSymbol:(NSString * _Nullable)symbol idfv:(NSString * _Nullable)idfv completionHandler:(void (^ _Nonnull)(NSInteger))completionHandler;
/// OMEGAConfigの設定値を取得する。
/// 本体アプリで呼ぶ
+ (void)setConfigWithSymbol:(NSString * _Nullable)symbol token:(NSString * _Nullable)token key:(NSString * _Nullable)key completionHandler:(void (^ _Nonnull)(NSString * _Nonnull))completionHandler;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC16OmegaKeyboardSDK11OmegaDevice")
@interface OmegaDevice : NSObject
/// IDFVを返す
+ (NSString * _Nonnull)getIDFV SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface UIView (SWIFT_EXTENSION(OmegaKeyboardSDK))
- (void)applyAutoLayoutMatchParent:(UIView * _Nonnull)parent margin:(CGFloat)margin;
@end

#pragma clang diagnostic pop
