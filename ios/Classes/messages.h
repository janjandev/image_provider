// Autogenerated from Pigeon (v0.1.17), do not edit directly.
// See also: https://pub.dev/packages/pigeon
#import <Foundation/Foundation.h>
@protocol FlutterBinaryMessenger;
@class FlutterError;
@class FlutterStandardTypedData;

NS_ASSUME_NONNULL_BEGIN

@class FLTTextureMessage;
@class FLTLoadMeaasge;

@interface FLTTextureMessage : NSObject
@property(nonatomic, strong, nullable) NSNumber * textureId;
@end

@interface FLTLoadMeaasge : NSObject
@property(nonatomic, strong, nullable) NSNumber * textureId;
@property(nonatomic, copy, nullable) NSString * uri;
@property(nonatomic, strong, nullable) NSNumber * width;
@property(nonatomic, strong, nullable) NSNumber * height;
@property(nonatomic, strong, nullable) NSNumber * resizeMode;
@end

@protocol FLTImageProviderApi
-(nullable FLTTextureMessage *)create:(FlutterError *_Nullable *_Nonnull)error;
-(void)dispose:(FLTTextureMessage*)input error:(FlutterError *_Nullable *_Nonnull)error;
-(void)load:(FLTLoadMeaasge*)input error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void FLTImageProviderApiSetup(id<FlutterBinaryMessenger> binaryMessenger, id<FLTImageProviderApi> _Nullable api);

NS_ASSUME_NONNULL_END
