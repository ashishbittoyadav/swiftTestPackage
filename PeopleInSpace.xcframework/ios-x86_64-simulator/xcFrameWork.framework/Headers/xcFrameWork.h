#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class XFWEcgConclusionCompanion, XFWEcgConclusion, XFWHrvConclusionCompanion, XFWHrvConclusion, XFWLeadTwoConclusionCompanion, XFWLeadTwoConclusion, XFWSevenLeadConclusionCompanion, XFWSevenLeadConclusion, XFWRisk, XFWTwelveLeadConclusionCompanion, XFWTwelveLeadConclusion, XFWEcgCharacteristicsCompanion, XFWEcgCharacteristics, XFWProcessorType, XFWEcgData, XFWEcgProcessorCompanion, XFWEcgProcessorResult, XFWAugmentedLeadGenerator, XFWEcgProcessorResultCompanion, XFWEcgDataCompanion, XFWHrvDataCompanion, XFWHrvData, XFWHrvHelperCompanion, XFWHrvPerMinuteData, XFWLeadTwoDataCompanion, XFWLeadTwoData, XFWSevenLeadDataCompanion, XFWSevenLeadData, XFWTwelveLeadDataCompanion, XFWTwelveLeadData, XFWImageDataCompanion, XFWImageData, XFWHrvImageDataCompanion, XFWHrvImageData, XFWLeadTwoImageDataCompanion, XFWLeadTwoImageData, XFWSevenLeadImageDataCompanion, XFWSevenLeadImageData, XFWTwelveLeadImageDataCompanion, XFWTwelveLeadImageData, XFWBiPhasicTPointsData, XFWAlgo2022Companion, XFWKotlinDoubleArray, XFWKotlinIntArray, XFWFFT, XFWArrhythmiaCompanion, XFWTrapezoidal, XFWArrhythmiaDiseases, XFWArrhythmiaDiseasesECGAbnormality, XFWArrhythmiaDiseasesECGDisease, XFWArrhythmiaDiseasesQRSType, XFWAugmentedLeadGeneratorCompanion, XFWBaseLineWanderingCompanion, XFWECGProcessingCompanion, XFWFFTComputation, XFWFilters, XFWHRVCompanion, XFWReSampler, XFWRespirationCompanion, XFWKotlinEnumCompanion, XFWKotlinEnum<E>, XFWKotlinArray<T>, XFWTwelveLeadDetectionEcgPosition, XFWGender, XFWHeartRiskAssessmentResult, XFWRecommendations, XFWDietRecommendation, XFWDrugRecommendation, XFWRelation, XFWRiskLevel, XFWRisk_, XFWMatrices, XFWKotlinDoubleIterator, XFWKotlinIntIterator, XFWKotlinThrowable, XFWKotlinx_serialization_coreSerializersModule, XFWKotlinx_serialization_coreSerialKind, XFWKotlinNothing;

@protocol XFWKotlinx_serialization_coreKSerializer, XFWKotlinComparable, XFWKotlinx_serialization_coreEncoder, XFWKotlinx_serialization_coreSerialDescriptor, XFWKotlinx_serialization_coreSerializationStrategy, XFWKotlinx_serialization_coreDecoder, XFWKotlinx_serialization_coreDeserializationStrategy, XFWKotlinIterator, XFWKotlinx_serialization_coreCompositeEncoder, XFWKotlinAnnotation, XFWKotlinx_serialization_coreCompositeDecoder, XFWKotlinx_serialization_coreSerializersModuleCollector, XFWKotlinKClass, XFWKotlinKDeclarationContainer, XFWKotlinKAnnotatedElement, XFWKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface XFWBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface XFWBase (XFWBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface XFWMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface XFWMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorXFWKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface XFWNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface XFWByte : XFWNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface XFWUByte : XFWNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface XFWShort : XFWNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface XFWUShort : XFWNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface XFWInt : XFWNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface XFWUInt : XFWNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface XFWLong : XFWNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface XFWULong : XFWNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface XFWFloat : XFWNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface XFWDouble : XFWNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface XFWBoolean : XFWNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface XFWGreeting : XFWBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greeting __attribute__((swift_name("greeting()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface XFWPlatform : XFWBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@property (readonly) NSString *someRandomData __attribute__((swift_name("someRandomData")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReferenceSignalHelper")))
@interface XFWReferenceSignalHelper : XFWBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSMutableArray<XFWDouble *> *referenceSignal __attribute__((swift_name("referenceSignal")));
@end;

__attribute__((swift_name("EcgConclusion")))
@interface XFWEcgConclusion : XFWBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) XFWEcgConclusionCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EcgConclusion.Companion")))
@interface XFWEcgConclusionCompanion : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWEcgConclusionCompanion *shared __attribute__((swift_name("shared")));
- (id<XFWKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HrvConclusion")))
@interface XFWHrvConclusion : XFWEcgConclusion
- (instancetype)initWithLf:(NSString *)lf hf:(NSString *)hf lfhfRatio:(NSString *)lfhfRatio breathPerMin:(float)breathPerMin sddn:(NSString *)sddn rmsddn:(NSString *)rmsddn sdann:(NSString *)sdann nn50:(NSString *)nn50 heartHealthAnalysis:(NSString *)heartHealthAnalysis stressCopingAbility:(NSString *)stressCopingAbility hrvTestAnalysis:(NSString *)hrvTestAnalysis electricalStability:(NSString *)electricalStability __attribute__((swift_name("init(lf:hf:lfhfRatio:breathPerMin:sddn:rmsddn:sdann:nn50:heartHealthAnalysis:stressCopingAbility:hrvTestAnalysis:electricalStability:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) XFWHrvConclusionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component10 __attribute__((swift_name("component10()")));
- (NSString *)component11 __attribute__((swift_name("component11()")));
- (NSString *)component12 __attribute__((swift_name("component12()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (float)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (XFWHrvConclusion *)doCopyLf:(NSString *)lf hf:(NSString *)hf lfhfRatio:(NSString *)lfhfRatio breathPerMin:(float)breathPerMin sddn:(NSString *)sddn rmsddn:(NSString *)rmsddn sdann:(NSString *)sdann nn50:(NSString *)nn50 heartHealthAnalysis:(NSString *)heartHealthAnalysis stressCopingAbility:(NSString *)stressCopingAbility hrvTestAnalysis:(NSString *)hrvTestAnalysis electricalStability:(NSString *)electricalStability __attribute__((swift_name("doCopy(lf:hf:lfhfRatio:breathPerMin:sddn:rmsddn:sdann:nn50:heartHealthAnalysis:stressCopingAbility:hrvTestAnalysis:electricalStability:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float breathPerMin __attribute__((swift_name("breathPerMin")));
@property (readonly) NSString *electricalStability __attribute__((swift_name("electricalStability")));
@property (readonly) NSString *heartHealthAnalysis __attribute__((swift_name("heartHealthAnalysis")));
@property (readonly) NSString *hf __attribute__((swift_name("hf")));
@property (readonly) NSString *hrvTestAnalysis __attribute__((swift_name("hrvTestAnalysis")));
@property (readonly) NSString *lf __attribute__((swift_name("lf")));
@property (readonly) NSString *lfhfRatio __attribute__((swift_name("lfhfRatio")));
@property (readonly) NSString *nn50 __attribute__((swift_name("nn50")));
@property (readonly) NSString *rmsddn __attribute__((swift_name("rmsddn")));
@property (readonly) NSString *sdann __attribute__((swift_name("sdann")));
@property (readonly) NSString *sddn __attribute__((swift_name("sddn")));
@property (readonly) NSString *stressCopingAbility __attribute__((swift_name("stressCopingAbility")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HrvConclusion.Companion")))
@interface XFWHrvConclusionCompanion : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWHrvConclusionCompanion *shared __attribute__((swift_name("shared")));
- (id<XFWKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LeadTwoConclusion")))
@interface XFWLeadTwoConclusion : XFWEcgConclusion
- (instancetype)initWithDetection:(NSString *)detection ecgType:(NSString *)ecgType qrsType:(NSString *)qrsType pWaveType:(NSString *)pWaveType baselineWandering:(BOOL)baselineWandering powerLineInterference:(BOOL)powerLineInterference __attribute__((swift_name("init(detection:ecgType:qrsType:pWaveType:baselineWandering:powerLineInterference:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) XFWLeadTwoConclusionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (BOOL)component6 __attribute__((swift_name("component6()")));
- (XFWLeadTwoConclusion *)doCopyDetection:(NSString *)detection ecgType:(NSString *)ecgType qrsType:(NSString *)qrsType pWaveType:(NSString *)pWaveType baselineWandering:(BOOL)baselineWandering powerLineInterference:(BOOL)powerLineInterference __attribute__((swift_name("doCopy(detection:ecgType:qrsType:pWaveType:baselineWandering:powerLineInterference:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL baselineWandering __attribute__((swift_name("baselineWandering")));
@property (readonly) NSString *detection __attribute__((swift_name("detection")));
@property (readonly) NSString *ecgType __attribute__((swift_name("ecgType")));
@property (readonly) NSString *pWaveType __attribute__((swift_name("pWaveType")));
@property (readonly) BOOL powerLineInterference __attribute__((swift_name("powerLineInterference")));
@property (readonly) NSString *qrsType __attribute__((swift_name("qrsType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LeadTwoConclusion.Companion")))
@interface XFWLeadTwoConclusionCompanion : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWLeadTwoConclusionCompanion *shared __attribute__((swift_name("shared")));
- (id<XFWKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SevenLeadConclusion")))
@interface XFWSevenLeadConclusion : XFWEcgConclusion
- (instancetype)initWithDetection:(NSString *)detection ecgType:(NSString *)ecgType qrsType:(NSString *)qrsType pWaveType:(NSString *)pWaveType stAbnormality:(NSString *)stAbnormality baselineWandering:(BOOL)baselineWandering powerLineInterference:(BOOL)powerLineInterference __attribute__((swift_name("init(detection:ecgType:qrsType:pWaveType:stAbnormality:baselineWandering:powerLineInterference:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) XFWSevenLeadConclusionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (BOOL)component6 __attribute__((swift_name("component6()")));
- (BOOL)component7 __attribute__((swift_name("component7()")));
- (XFWSevenLeadConclusion *)doCopyDetection:(NSString *)detection ecgType:(NSString *)ecgType qrsType:(NSString *)qrsType pWaveType:(NSString *)pWaveType stAbnormality:(NSString *)stAbnormality baselineWandering:(BOOL)baselineWandering powerLineInterference:(BOOL)powerLineInterference __attribute__((swift_name("doCopy(detection:ecgType:qrsType:pWaveType:stAbnormality:baselineWandering:powerLineInterference:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL baselineWandering __attribute__((swift_name("baselineWandering")));
@property (readonly) NSString *detection __attribute__((swift_name("detection")));
@property (readonly) NSString *ecgType __attribute__((swift_name("ecgType")));
@property (readonly) NSString *pWaveType __attribute__((swift_name("pWaveType")));
@property (readonly) BOOL powerLineInterference __attribute__((swift_name("powerLineInterference")));
@property (readonly) NSString *qrsType __attribute__((swift_name("qrsType")));
@property (readonly) NSString *stAbnormality __attribute__((swift_name("stAbnormality")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SevenLeadConclusion.Companion")))
@interface XFWSevenLeadConclusionCompanion : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWSevenLeadConclusionCompanion *shared __attribute__((swift_name("shared")));
- (id<XFWKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TwelveLeadConclusion")))
@interface XFWTwelveLeadConclusion : XFWEcgConclusion
- (instancetype)initWithDetection:(NSString *)detection ecgType:(NSString *)ecgType recommendation:(NSString *)recommendation anomalies:(NSString *)anomalies risk:(XFWRisk *)risk __attribute__((swift_name("init(detection:ecgType:recommendation:anomalies:risk:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) XFWTwelveLeadConclusionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (XFWRisk *)component5 __attribute__((swift_name("component5()")));
- (XFWTwelveLeadConclusion *)doCopyDetection:(NSString *)detection ecgType:(NSString *)ecgType recommendation:(NSString *)recommendation anomalies:(NSString *)anomalies risk:(XFWRisk *)risk __attribute__((swift_name("doCopy(detection:ecgType:recommendation:anomalies:risk:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *anomalies __attribute__((swift_name("anomalies")));
@property (readonly) NSString *detection __attribute__((swift_name("detection")));
@property (readonly) NSString *ecgType __attribute__((swift_name("ecgType")));
@property (readonly) NSString *recommendation __attribute__((swift_name("recommendation")));
@property (readonly) XFWRisk *risk __attribute__((swift_name("risk")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TwelveLeadConclusion.Companion")))
@interface XFWTwelveLeadConclusionCompanion : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWTwelveLeadConclusionCompanion *shared __attribute__((swift_name("shared")));
- (id<XFWKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EcgCharacteristics")))
@interface XFWEcgCharacteristics : XFWBase
- (instancetype)initWithPr:(int32_t)pr qrs:(int32_t)qrs qt:(int32_t)qt qtc:(double)qtc rr:(int32_t)rr heartRate:(int32_t)heartRate stElevation:(double)stElevation qrsIntervals:(NSMutableArray<XFWDouble *> *)qrsIntervals rrIntervals:(NSMutableArray<XFWDouble *> *)rrIntervals prStopIndices:(NSMutableArray<XFWDouble *> *)prStopIndices prStartIndices:(NSMutableArray<XFWDouble *> *)prStartIndices pWavePoints:(NSMutableArray<XFWDouble *> *)pWavePoints qWavePoints:(NSMutableArray<XFWDouble *> *)qWavePoints sWavePoints:(NSMutableArray<XFWDouble *> *)sWavePoints tWavePoints:(NSMutableArray<XFWDouble *> *)tWavePoints rPeakPoints:(NSMutableArray<XFWDouble *> *)rPeakPoints tWaveEndPoints:(NSMutableArray<XFWDouble *> *)tWaveEndPoints averagePAmplitudeInLead:(double)averagePAmplitudeInLead averageQAmplitudeInLead:(double)averageQAmplitudeInLead averageSAmplitudeInLead:(double)averageSAmplitudeInLead averageTAmplitudeInLead:(double)averageTAmplitudeInLead averageRAmplitudeInLead:(double)averageRAmplitudeInLead pWidth:(double)pWidth tWidth:(double)tWidth qrsDirectionUpward:(BOOL)qrsDirectionUpward ratioRS:(double)ratioRS ventricularActivationLOR:(double)ventricularActivationLOR ventricularActivationROR:(double)ventricularActivationROR concavity:(BOOL)concavity __attribute__((swift_name("init(pr:qrs:qt:qtc:rr:heartRate:stElevation:qrsIntervals:rrIntervals:prStopIndices:prStartIndices:pWavePoints:qWavePoints:sWavePoints:tWavePoints:rPeakPoints:tWaveEndPoints:averagePAmplitudeInLead:averageQAmplitudeInLead:averageSAmplitudeInLead:averageTAmplitudeInLead:averageRAmplitudeInLead:pWidth:tWidth:qrsDirectionUpward:ratioRS:ventricularActivationLOR:ventricularActivationROR:concavity:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) XFWEcgCharacteristicsCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSMutableArray<XFWDouble *> *)component10 __attribute__((swift_name("component10()")));
- (NSMutableArray<XFWDouble *> *)component11 __attribute__((swift_name("component11()")));
- (NSMutableArray<XFWDouble *> *)component12 __attribute__((swift_name("component12()")));
- (NSMutableArray<XFWDouble *> *)component13 __attribute__((swift_name("component13()")));
- (NSMutableArray<XFWDouble *> *)component14 __attribute__((swift_name("component14()")));
- (NSMutableArray<XFWDouble *> *)component15 __attribute__((swift_name("component15()")));
- (NSMutableArray<XFWDouble *> *)component16 __attribute__((swift_name("component16()")));
- (NSMutableArray<XFWDouble *> *)component17 __attribute__((swift_name("component17()")));
- (double)component18 __attribute__((swift_name("component18()")));
- (double)component19 __attribute__((swift_name("component19()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (double)component20 __attribute__((swift_name("component20()")));
- (double)component21 __attribute__((swift_name("component21()")));
- (double)component22 __attribute__((swift_name("component22()")));
- (double)component23 __attribute__((swift_name("component23()")));
- (double)component24 __attribute__((swift_name("component24()")));
- (BOOL)component25 __attribute__((swift_name("component25()")));
- (double)component26 __attribute__((swift_name("component26()")));
- (double)component27 __attribute__((swift_name("component27()")));
- (double)component28 __attribute__((swift_name("component28()")));
- (BOOL)component29 __attribute__((swift_name("component29()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (double)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (double)component7 __attribute__((swift_name("component7()")));
- (NSMutableArray<XFWDouble *> *)component8 __attribute__((swift_name("component8()")));
- (NSMutableArray<XFWDouble *> *)component9 __attribute__((swift_name("component9()")));
- (XFWEcgCharacteristics *)doCopyPr:(int32_t)pr qrs:(int32_t)qrs qt:(int32_t)qt qtc:(double)qtc rr:(int32_t)rr heartRate:(int32_t)heartRate stElevation:(double)stElevation qrsIntervals:(NSMutableArray<XFWDouble *> *)qrsIntervals rrIntervals:(NSMutableArray<XFWDouble *> *)rrIntervals prStopIndices:(NSMutableArray<XFWDouble *> *)prStopIndices prStartIndices:(NSMutableArray<XFWDouble *> *)prStartIndices pWavePoints:(NSMutableArray<XFWDouble *> *)pWavePoints qWavePoints:(NSMutableArray<XFWDouble *> *)qWavePoints sWavePoints:(NSMutableArray<XFWDouble *> *)sWavePoints tWavePoints:(NSMutableArray<XFWDouble *> *)tWavePoints rPeakPoints:(NSMutableArray<XFWDouble *> *)rPeakPoints tWaveEndPoints:(NSMutableArray<XFWDouble *> *)tWaveEndPoints averagePAmplitudeInLead:(double)averagePAmplitudeInLead averageQAmplitudeInLead:(double)averageQAmplitudeInLead averageSAmplitudeInLead:(double)averageSAmplitudeInLead averageTAmplitudeInLead:(double)averageTAmplitudeInLead averageRAmplitudeInLead:(double)averageRAmplitudeInLead pWidth:(double)pWidth tWidth:(double)tWidth qrsDirectionUpward:(BOOL)qrsDirectionUpward ratioRS:(double)ratioRS ventricularActivationLOR:(double)ventricularActivationLOR ventricularActivationROR:(double)ventricularActivationROR concavity:(BOOL)concavity __attribute__((swift_name("doCopy(pr:qrs:qt:qtc:rr:heartRate:stElevation:qrsIntervals:rrIntervals:prStopIndices:prStartIndices:pWavePoints:qWavePoints:sWavePoints:tWavePoints:rPeakPoints:tWaveEndPoints:averagePAmplitudeInLead:averageQAmplitudeInLead:averageSAmplitudeInLead:averageTAmplitudeInLead:averageRAmplitudeInLead:pWidth:tWidth:qrsDirectionUpward:ratioRS:ventricularActivationLOR:ventricularActivationROR:concavity:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property double averagePAmplitudeInLead __attribute__((swift_name("averagePAmplitudeInLead")));
@property double averageQAmplitudeInLead __attribute__((swift_name("averageQAmplitudeInLead")));
@property double averageRAmplitudeInLead __attribute__((swift_name("averageRAmplitudeInLead")));
@property double averageSAmplitudeInLead __attribute__((swift_name("averageSAmplitudeInLead")));
@property double averageTAmplitudeInLead __attribute__((swift_name("averageTAmplitudeInLead")));
@property BOOL concavity __attribute__((swift_name("concavity")));
@property int32_t heartRate __attribute__((swift_name("heartRate")));
@property NSMutableArray<XFWDouble *> *pWavePoints __attribute__((swift_name("pWavePoints")));
@property double pWidth __attribute__((swift_name("pWidth")));
@property int32_t pr __attribute__((swift_name("pr")));
@property NSMutableArray<XFWDouble *> *prStartIndices __attribute__((swift_name("prStartIndices")));
@property NSMutableArray<XFWDouble *> *prStopIndices __attribute__((swift_name("prStopIndices")));
@property NSMutableArray<XFWDouble *> *qWavePoints __attribute__((swift_name("qWavePoints")));
@property int32_t qrs __attribute__((swift_name("qrs")));
@property BOOL qrsDirectionUpward __attribute__((swift_name("qrsDirectionUpward")));
@property NSMutableArray<XFWDouble *> *qrsIntervals __attribute__((swift_name("qrsIntervals")));
@property int32_t qt __attribute__((swift_name("qt")));
@property double qtc __attribute__((swift_name("qtc")));
@property NSMutableArray<XFWDouble *> *rPeakPoints __attribute__((swift_name("rPeakPoints")));
@property double ratioRS __attribute__((swift_name("ratioRS")));
@property int32_t rr __attribute__((swift_name("rr")));
@property NSMutableArray<XFWDouble *> *rrIntervals __attribute__((swift_name("rrIntervals")));
@property NSMutableArray<XFWDouble *> *sWavePoints __attribute__((swift_name("sWavePoints")));
@property double stElevation __attribute__((swift_name("stElevation")));
@property NSMutableArray<XFWDouble *> *tWaveEndPoints __attribute__((swift_name("tWaveEndPoints")));
@property NSMutableArray<XFWDouble *> *tWavePoints __attribute__((swift_name("tWavePoints")));
@property double tWidth __attribute__((swift_name("tWidth")));
@property double ventricularActivationLOR __attribute__((swift_name("ventricularActivationLOR")));
@property double ventricularActivationROR __attribute__((swift_name("ventricularActivationROR")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EcgCharacteristics.Companion")))
@interface XFWEcgCharacteristicsCompanion : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWEcgCharacteristicsCompanion *shared __attribute__((swift_name("shared")));
- (id<XFWKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EcgCharacteristicsCalculator")))
@interface XFWEcgCharacteristicsCalculator : XFWBase
- (instancetype)initWithSignal:(NSMutableArray<XFWDouble *> *)signal augmentedLead:(int32_t)augmentedLead applyFilter:(BOOL)applyFilter adjustRPeaks:(BOOL)adjustRPeaks __attribute__((swift_name("init(signal:augmentedLead:applyFilter:adjustRPeaks:)"))) __attribute__((objc_designated_initializer));
- (XFWEcgCharacteristics * _Nullable)getCharacteristicsMsDifference:(double)msDifference __attribute__((swift_name("getCharacteristics(msDifference:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EcgProcessor")))
@interface XFWEcgProcessor : XFWBase
- (instancetype)initWithEcgType:(XFWProcessorType *)ecgType ecgData:(XFWEcgData *)ecgData applyFilter:(BOOL)applyFilter adjustRPeaks:(BOOL)adjustRPeaks __attribute__((swift_name("init(ecgType:ecgData:applyFilter:adjustRPeaks:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) XFWEcgProcessorCompanion *companion __attribute__((swift_name("companion")));
- (XFWEcgProcessorResult *)processAugmentedLeadGenerator:(XFWAugmentedLeadGenerator * _Nullable)augmentedLeadGenerator age:(int32_t)age __attribute__((swift_name("process(augmentedLeadGenerator:age:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EcgProcessor.Companion")))
@interface XFWEcgProcessorCompanion : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWEcgProcessorCompanion *shared __attribute__((swift_name("shared")));
- (XFWAugmentedLeadGenerator *)getAugmentedLeadGeneratorLead1Points:(NSMutableArray<XFWDouble *> *)lead1Points lead2Points:(NSMutableArray<XFWDouble *> *)lead2Points __attribute__((swift_name("getAugmentedLeadGenerator(lead1Points:lead2Points:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EcgProcessorResult")))
@interface XFWEcgProcessorResult : XFWBase
- (instancetype)initWithCharacteristics:(NSMutableArray<id> *)characteristics conclusion:(XFWEcgConclusion *)conclusion __attribute__((swift_name("init(characteristics:conclusion:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) XFWEcgProcessorResultCompanion *companion __attribute__((swift_name("companion")));
- (NSMutableArray<id> *)component1 __attribute__((swift_name("component1()")));
- (XFWEcgConclusion *)component2 __attribute__((swift_name("component2()")));
- (XFWEcgProcessorResult *)doCopyCharacteristics:(NSMutableArray<id> *)characteristics conclusion:(XFWEcgConclusion *)conclusion __attribute__((swift_name("doCopy(characteristics:conclusion:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSMutableArray<id> *characteristics __attribute__((swift_name("characteristics")));
@property (readonly) XFWEcgConclusion *conclusion __attribute__((swift_name("conclusion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EcgProcessorResult.Companion")))
@interface XFWEcgProcessorResultCompanion : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWEcgProcessorResultCompanion *shared __attribute__((swift_name("shared")));
- (id<XFWKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("EcgData")))
@interface XFWEcgData : XFWBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) XFWEcgDataCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EcgData.Companion")))
@interface XFWEcgDataCompanion : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWEcgDataCompanion *shared __attribute__((swift_name("shared")));
- (id<XFWKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HrvData")))
@interface XFWHrvData : XFWEcgData
- (instancetype)initWithFiveMinuteData:(NSMutableArray<XFWDouble *> *)fiveMinuteData fftData:(NSMutableArray<XFWDouble *> *)fftData __attribute__((swift_name("init(fiveMinuteData:fftData:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) XFWHrvDataCompanion *companion __attribute__((swift_name("companion")));
- (NSMutableArray<XFWDouble *> *)component1 __attribute__((swift_name("component1()")));
- (NSMutableArray<XFWDouble *> *)component2 __attribute__((swift_name("component2()")));
- (XFWHrvData *)doCopyFiveMinuteData:(NSMutableArray<XFWDouble *> *)fiveMinuteData fftData:(NSMutableArray<XFWDouble *> *)fftData __attribute__((swift_name("doCopy(fiveMinuteData:fftData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSMutableArray<XFWDouble *> *fftData __attribute__((swift_name("fftData")));
@property NSMutableArray<XFWDouble *> *fiveMinuteData __attribute__((swift_name("fiveMinuteData")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HrvData.Companion")))
@interface XFWHrvDataCompanion : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWHrvDataCompanion *shared __attribute__((swift_name("shared")));
- (id<XFWKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HrvHelper")))
@interface XFWHrvHelper : XFWBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) XFWHrvHelperCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HrvHelper.Companion")))
@interface XFWHrvHelperCompanion : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWHrvHelperCompanion *shared __attribute__((swift_name("shared")));
- (XFWHrvPerMinuteData *)getPerMinuteDataFromHrvFullDataList:(NSMutableArray<XFWDouble *> *)list __attribute__((swift_name("getPerMinuteDataFromHrvFullData(list:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HrvPerMinuteData")))
@interface XFWHrvPerMinuteData : XFWBase
- (instancetype)initWithFirstMinuteData:(NSMutableArray<XFWDouble *> *)firstMinuteData secondMinuteData:(NSMutableArray<XFWDouble *> *)secondMinuteData thirdMinuteData:(NSMutableArray<XFWDouble *> *)thirdMinuteData fourthMinuteData:(NSMutableArray<XFWDouble *> *)fourthMinuteData fifthMinuteData:(NSMutableArray<XFWDouble *> *)fifthMinuteData __attribute__((swift_name("init(firstMinuteData:secondMinuteData:thirdMinuteData:fourthMinuteData:fifthMinuteData:)"))) __attribute__((objc_designated_initializer));
- (NSMutableArray<XFWDouble *> *)component1 __attribute__((swift_name("component1()")));
- (NSMutableArray<XFWDouble *> *)component2 __attribute__((swift_name("component2()")));
- (NSMutableArray<XFWDouble *> *)component3 __attribute__((swift_name("component3()")));
- (NSMutableArray<XFWDouble *> *)component4 __attribute__((swift_name("component4()")));
- (NSMutableArray<XFWDouble *> *)component5 __attribute__((swift_name("component5()")));
- (XFWHrvPerMinuteData *)doCopyFirstMinuteData:(NSMutableArray<XFWDouble *> *)firstMinuteData secondMinuteData:(NSMutableArray<XFWDouble *> *)secondMinuteData thirdMinuteData:(NSMutableArray<XFWDouble *> *)thirdMinuteData fourthMinuteData:(NSMutableArray<XFWDouble *> *)fourthMinuteData fifthMinuteData:(NSMutableArray<XFWDouble *> *)fifthMinuteData __attribute__((swift_name("doCopy(firstMinuteData:secondMinuteData:thirdMinuteData:fourthMinuteData:fifthMinuteData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSMutableArray<XFWDouble *> *fifthMinuteData __attribute__((swift_name("fifthMinuteData")));
@property (readonly) NSMutableArray<XFWDouble *> *firstMinuteData __attribute__((swift_name("firstMinuteData")));
@property (readonly) NSMutableArray<XFWDouble *> *fourthMinuteData __attribute__((swift_name("fourthMinuteData")));
@property (readonly) NSMutableArray<XFWDouble *> *secondMinuteData __attribute__((swift_name("secondMinuteData")));
@property (readonly) NSMutableArray<XFWDouble *> *thirdMinuteData __attribute__((swift_name("thirdMinuteData")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LeadTwoData")))
@interface XFWLeadTwoData : XFWEcgData
- (instancetype)initWithLead2Data:(NSMutableArray<XFWDouble *> *)lead2Data __attribute__((swift_name("init(lead2Data:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) XFWLeadTwoDataCompanion *companion __attribute__((swift_name("companion")));
- (NSMutableArray<XFWDouble *> *)component1 __attribute__((swift_name("component1()")));
- (XFWLeadTwoData *)doCopyLead2Data:(NSMutableArray<XFWDouble *> *)lead2Data __attribute__((swift_name("doCopy(lead2Data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSMutableArray<XFWDouble *> *lead2Data __attribute__((swift_name("lead2Data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LeadTwoData.Companion")))
@interface XFWLeadTwoDataCompanion : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWLeadTwoDataCompanion *shared __attribute__((swift_name("shared")));
- (id<XFWKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SevenLeadData")))
@interface XFWSevenLeadData : XFWEcgData
- (instancetype)initWithV1Data:(NSMutableArray<XFWDouble *> *)v1Data v2Data:(NSMutableArray<XFWDouble *> *)v2Data v3Data:(NSMutableArray<XFWDouble *> *)v3Data v4Data:(NSMutableArray<XFWDouble *> *)v4Data v5Data:(NSMutableArray<XFWDouble *> *)v5Data v6Data:(NSMutableArray<XFWDouble *> *)v6Data lead2Data:(NSMutableArray<XFWDouble *> *)lead2Data __attribute__((swift_name("init(v1Data:v2Data:v3Data:v4Data:v5Data:v6Data:lead2Data:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) XFWSevenLeadDataCompanion *companion __attribute__((swift_name("companion")));
- (NSMutableArray<XFWDouble *> *)component1 __attribute__((swift_name("component1()")));
- (NSMutableArray<XFWDouble *> *)component2 __attribute__((swift_name("component2()")));
- (NSMutableArray<XFWDouble *> *)component3 __attribute__((swift_name("component3()")));
- (NSMutableArray<XFWDouble *> *)component4 __attribute__((swift_name("component4()")));
- (NSMutableArray<XFWDouble *> *)component5 __attribute__((swift_name("component5()")));
- (NSMutableArray<XFWDouble *> *)component6 __attribute__((swift_name("component6()")));
- (NSMutableArray<XFWDouble *> *)component7 __attribute__((swift_name("component7()")));
- (XFWSevenLeadData *)doCopyV1Data:(NSMutableArray<XFWDouble *> *)v1Data v2Data:(NSMutableArray<XFWDouble *> *)v2Data v3Data:(NSMutableArray<XFWDouble *> *)v3Data v4Data:(NSMutableArray<XFWDouble *> *)v4Data v5Data:(NSMutableArray<XFWDouble *> *)v5Data v6Data:(NSMutableArray<XFWDouble *> *)v6Data lead2Data:(NSMutableArray<XFWDouble *> *)lead2Data __attribute__((swift_name("doCopy(v1Data:v2Data:v3Data:v4Data:v5Data:v6Data:lead2Data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSMutableArray<XFWDouble *> *lead2Data __attribute__((swift_name("lead2Data")));
@property NSMutableArray<XFWDouble *> *v1Data __attribute__((swift_name("v1Data")));
@property NSMutableArray<XFWDouble *> *v2Data __attribute__((swift_name("v2Data")));
@property NSMutableArray<XFWDouble *> *v3Data __attribute__((swift_name("v3Data")));
@property NSMutableArray<XFWDouble *> *v4Data __attribute__((swift_name("v4Data")));
@property NSMutableArray<XFWDouble *> *v5Data __attribute__((swift_name("v5Data")));
@property NSMutableArray<XFWDouble *> *v6Data __attribute__((swift_name("v6Data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SevenLeadData.Companion")))
@interface XFWSevenLeadDataCompanion : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWSevenLeadDataCompanion *shared __attribute__((swift_name("shared")));
- (id<XFWKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TwelveLeadData")))
@interface XFWTwelveLeadData : XFWEcgData
- (instancetype)initWithV1Data:(NSMutableArray<XFWDouble *> *)v1Data v2Data:(NSMutableArray<XFWDouble *> *)v2Data v3Data:(NSMutableArray<XFWDouble *> *)v3Data v4Data:(NSMutableArray<XFWDouble *> *)v4Data v5Data:(NSMutableArray<XFWDouble *> *)v5Data v6Data:(NSMutableArray<XFWDouble *> *)v6Data lead1Data:(NSMutableArray<XFWDouble *> *)lead1Data lead2Data:(NSMutableArray<XFWDouble *> *)lead2Data lead3Data:(NSMutableArray<XFWDouble *> *)lead3Data avlData:(NSMutableArray<XFWDouble *> *)avlData avrData:(NSMutableArray<XFWDouble *> *)avrData avfData:(NSMutableArray<XFWDouble *> *)avfData __attribute__((swift_name("init(v1Data:v2Data:v3Data:v4Data:v5Data:v6Data:lead1Data:lead2Data:lead3Data:avlData:avrData:avfData:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) XFWTwelveLeadDataCompanion *companion __attribute__((swift_name("companion")));
- (NSMutableArray<XFWDouble *> *)component1 __attribute__((swift_name("component1()")));
- (NSMutableArray<XFWDouble *> *)component10 __attribute__((swift_name("component10()")));
- (NSMutableArray<XFWDouble *> *)component11 __attribute__((swift_name("component11()")));
- (NSMutableArray<XFWDouble *> *)component12 __attribute__((swift_name("component12()")));
- (NSMutableArray<XFWDouble *> *)component2 __attribute__((swift_name("component2()")));
- (NSMutableArray<XFWDouble *> *)component3 __attribute__((swift_name("component3()")));
- (NSMutableArray<XFWDouble *> *)component4 __attribute__((swift_name("component4()")));
- (NSMutableArray<XFWDouble *> *)component5 __attribute__((swift_name("component5()")));
- (NSMutableArray<XFWDouble *> *)component6 __attribute__((swift_name("component6()")));
- (NSMutableArray<XFWDouble *> *)component7 __attribute__((swift_name("component7()")));
- (NSMutableArray<XFWDouble *> *)component8 __attribute__((swift_name("component8()")));
- (NSMutableArray<XFWDouble *> *)component9 __attribute__((swift_name("component9()")));
- (XFWTwelveLeadData *)doCopyV1Data:(NSMutableArray<XFWDouble *> *)v1Data v2Data:(NSMutableArray<XFWDouble *> *)v2Data v3Data:(NSMutableArray<XFWDouble *> *)v3Data v4Data:(NSMutableArray<XFWDouble *> *)v4Data v5Data:(NSMutableArray<XFWDouble *> *)v5Data v6Data:(NSMutableArray<XFWDouble *> *)v6Data lead1Data:(NSMutableArray<XFWDouble *> *)lead1Data lead2Data:(NSMutableArray<XFWDouble *> *)lead2Data lead3Data:(NSMutableArray<XFWDouble *> *)lead3Data avlData:(NSMutableArray<XFWDouble *> *)avlData avrData:(NSMutableArray<XFWDouble *> *)avrData avfData:(NSMutableArray<XFWDouble *> *)avfData __attribute__((swift_name("doCopy(v1Data:v2Data:v3Data:v4Data:v5Data:v6Data:lead1Data:lead2Data:lead3Data:avlData:avrData:avfData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSMutableArray<XFWDouble *> *avfData __attribute__((swift_name("avfData")));
@property NSMutableArray<XFWDouble *> *avlData __attribute__((swift_name("avlData")));
@property NSMutableArray<XFWDouble *> *avrData __attribute__((swift_name("avrData")));
@property NSMutableArray<XFWDouble *> *lead1Data __attribute__((swift_name("lead1Data")));
@property NSMutableArray<XFWDouble *> *lead2Data __attribute__((swift_name("lead2Data")));
@property NSMutableArray<XFWDouble *> *lead3Data __attribute__((swift_name("lead3Data")));
@property NSMutableArray<XFWDouble *> *v1Data __attribute__((swift_name("v1Data")));
@property NSMutableArray<XFWDouble *> *v2Data __attribute__((swift_name("v2Data")));
@property NSMutableArray<XFWDouble *> *v3Data __attribute__((swift_name("v3Data")));
@property NSMutableArray<XFWDouble *> *v4Data __attribute__((swift_name("v4Data")));
@property NSMutableArray<XFWDouble *> *v5Data __attribute__((swift_name("v5Data")));
@property NSMutableArray<XFWDouble *> *v6Data __attribute__((swift_name("v6Data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TwelveLeadData.Companion")))
@interface XFWTwelveLeadDataCompanion : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWTwelveLeadDataCompanion *shared __attribute__((swift_name("shared")));
- (id<XFWKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("ImageData")))
@interface XFWImageData : XFWBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) XFWImageDataCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HrvImageData")))
@interface XFWHrvImageData : XFWImageData
- (instancetype)initWithFirstMinuteImg:(NSString *)firstMinuteImg secondMinuteImg:(NSString *)secondMinuteImg thirdMinuteImg:(NSString *)thirdMinuteImg fourthMinuteImg:(NSString *)fourthMinuteImg fifthMinuteImg:(NSString *)fifthMinuteImg radarChartImg:(NSString *)radarChartImg bpmChartImg:(NSString *)bpmChartImg rrChartImg:(NSString *)rrChartImg fftImg:(NSString *)fftImg __attribute__((swift_name("init(firstMinuteImg:secondMinuteImg:thirdMinuteImg:fourthMinuteImg:fifthMinuteImg:radarChartImg:bpmChartImg:rrChartImg:fftImg:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) XFWHrvImageDataCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (XFWHrvImageData *)doCopyFirstMinuteImg:(NSString *)firstMinuteImg secondMinuteImg:(NSString *)secondMinuteImg thirdMinuteImg:(NSString *)thirdMinuteImg fourthMinuteImg:(NSString *)fourthMinuteImg fifthMinuteImg:(NSString *)fifthMinuteImg radarChartImg:(NSString *)radarChartImg bpmChartImg:(NSString *)bpmChartImg rrChartImg:(NSString *)rrChartImg fftImg:(NSString *)fftImg __attribute__((swift_name("doCopy(firstMinuteImg:secondMinuteImg:thirdMinuteImg:fourthMinuteImg:fifthMinuteImg:radarChartImg:bpmChartImg:rrChartImg:fftImg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *bpmChartImg __attribute__((swift_name("bpmChartImg")));
@property (readonly) NSString *fftImg __attribute__((swift_name("fftImg")));
@property (readonly) NSString *fifthMinuteImg __attribute__((swift_name("fifthMinuteImg")));
@property (readonly) NSString *firstMinuteImg __attribute__((swift_name("firstMinuteImg")));
@property (readonly) NSString *fourthMinuteImg __attribute__((swift_name("fourthMinuteImg")));
@property (readonly) NSString *radarChartImg __attribute__((swift_name("radarChartImg")));
@property (readonly) NSString *rrChartImg __attribute__((swift_name("rrChartImg")));
@property (readonly) NSString *secondMinuteImg __attribute__((swift_name("secondMinuteImg")));
@property (readonly) NSString *thirdMinuteImg __attribute__((swift_name("thirdMinuteImg")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HrvImageData.Companion")))
@interface XFWHrvImageDataCompanion : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWHrvImageDataCompanion *shared __attribute__((swift_name("shared")));
- (id<XFWKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageData.Companion")))
@interface XFWImageDataCompanion : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWImageDataCompanion *shared __attribute__((swift_name("shared")));
- (id<XFWKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LeadTwoImageData")))
@interface XFWLeadTwoImageData : XFWImageData
- (instancetype)initWithLead2Img:(NSString *)lead2Img __attribute__((swift_name("init(lead2Img:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) XFWLeadTwoImageDataCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (XFWLeadTwoImageData *)doCopyLead2Img:(NSString *)lead2Img __attribute__((swift_name("doCopy(lead2Img:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *lead2Img __attribute__((swift_name("lead2Img")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LeadTwoImageData.Companion")))
@interface XFWLeadTwoImageDataCompanion : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWLeadTwoImageDataCompanion *shared __attribute__((swift_name("shared")));
- (id<XFWKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SevenLeadImageData")))
@interface XFWSevenLeadImageData : XFWImageData
- (instancetype)initWithV1Img:(NSString *)v1Img v2Img:(NSString *)v2Img v3Img:(NSString *)v3Img v4Img:(NSString *)v4Img v5Img:(NSString *)v5Img v6Img:(NSString *)v6Img lead2Img:(NSString *)lead2Img __attribute__((swift_name("init(v1Img:v2Img:v3Img:v4Img:v5Img:v6Img:lead2Img:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) XFWSevenLeadImageDataCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (XFWSevenLeadImageData *)doCopyV1Img:(NSString *)v1Img v2Img:(NSString *)v2Img v3Img:(NSString *)v3Img v4Img:(NSString *)v4Img v5Img:(NSString *)v5Img v6Img:(NSString *)v6Img lead2Img:(NSString *)lead2Img __attribute__((swift_name("doCopy(v1Img:v2Img:v3Img:v4Img:v5Img:v6Img:lead2Img:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *lead2Img __attribute__((swift_name("lead2Img")));
@property (readonly) NSString *v1Img __attribute__((swift_name("v1Img")));
@property (readonly) NSString *v2Img __attribute__((swift_name("v2Img")));
@property (readonly) NSString *v3Img __attribute__((swift_name("v3Img")));
@property (readonly) NSString *v4Img __attribute__((swift_name("v4Img")));
@property (readonly) NSString *v5Img __attribute__((swift_name("v5Img")));
@property (readonly) NSString *v6Img __attribute__((swift_name("v6Img")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SevenLeadImageData.Companion")))
@interface XFWSevenLeadImageDataCompanion : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWSevenLeadImageDataCompanion *shared __attribute__((swift_name("shared")));
- (id<XFWKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TwelveLeadImageData")))
@interface XFWTwelveLeadImageData : XFWImageData
- (instancetype)initWithV1Img:(NSString *)v1Img v2Img:(NSString *)v2Img v3Img:(NSString *)v3Img v4Img:(NSString *)v4Img v5Img:(NSString *)v5Img v6Img:(NSString *)v6Img lead1Img:(NSString *)lead1Img lead2Img:(NSString *)lead2Img lead3Img:(NSString *)lead3Img avlImg:(NSString *)avlImg avrImg:(NSString *)avrImg avfImg:(NSString *)avfImg __attribute__((swift_name("init(v1Img:v2Img:v3Img:v4Img:v5Img:v6Img:lead1Img:lead2Img:lead3Img:avlImg:avrImg:avfImg:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) XFWTwelveLeadImageDataCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component10 __attribute__((swift_name("component10()")));
- (NSString *)component11 __attribute__((swift_name("component11()")));
- (NSString *)component12 __attribute__((swift_name("component12()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (XFWTwelveLeadImageData *)doCopyV1Img:(NSString *)v1Img v2Img:(NSString *)v2Img v3Img:(NSString *)v3Img v4Img:(NSString *)v4Img v5Img:(NSString *)v5Img v6Img:(NSString *)v6Img lead1Img:(NSString *)lead1Img lead2Img:(NSString *)lead2Img lead3Img:(NSString *)lead3Img avlImg:(NSString *)avlImg avrImg:(NSString *)avrImg avfImg:(NSString *)avfImg __attribute__((swift_name("doCopy(v1Img:v2Img:v3Img:v4Img:v5Img:v6Img:lead1Img:lead2Img:lead3Img:avlImg:avrImg:avfImg:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *avfImg __attribute__((swift_name("avfImg")));
@property (readonly) NSString *avlImg __attribute__((swift_name("avlImg")));
@property (readonly) NSString *avrImg __attribute__((swift_name("avrImg")));
@property (readonly) NSString *lead1Img __attribute__((swift_name("lead1Img")));
@property (readonly) NSString *lead2Img __attribute__((swift_name("lead2Img")));
@property (readonly) NSString *lead3Img __attribute__((swift_name("lead3Img")));
@property (readonly) NSString *v1Img __attribute__((swift_name("v1Img")));
@property (readonly) NSString *v2Img __attribute__((swift_name("v2Img")));
@property (readonly) NSString *v3Img __attribute__((swift_name("v3Img")));
@property (readonly) NSString *v4Img __attribute__((swift_name("v4Img")));
@property (readonly) NSString *v5Img __attribute__((swift_name("v5Img")));
@property (readonly) NSString *v6Img __attribute__((swift_name("v6Img")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TwelveLeadImageData.Companion")))
@interface XFWTwelveLeadImageDataCompanion : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWTwelveLeadImageDataCompanion *shared __attribute__((swift_name("shared")));
- (id<XFWKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Algo2022")))
@interface XFWAlgo2022 : XFWBase
- (instancetype)initWithEcgCharacteristics:(NSMutableArray<id> *)ecgCharacteristics biPhasicTPointsData:(NSMutableArray<XFWBiPhasicTPointsData *> *)biPhasicTPointsData __attribute__((swift_name("init(ecgCharacteristics:biPhasicTPointsData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) XFWAlgo2022Companion *companion __attribute__((swift_name("companion")));
- (void)calculateTestEvaluationResultAndRecommendedTestAreInterpretationsNormal:(BOOL)areInterpretationsNormal __attribute__((swift_name("calculateTestEvaluationResultAndRecommendedTest(areInterpretationsNormal:)")));
- (NSMutableArray<XFWInt *> *)fetchingAlgorithmStringNumbersCall:(int32_t)call __attribute__((swift_name("fetchingAlgorithmStringNumbers(call:)")));
- (NSString *)getInterpretationStatementNumber:(int32_t)number __attribute__((swift_name("getInterpretationStatement(number:)")));
- (NSMutableArray<XFWInt *> *)noBranch __attribute__((swift_name("noBranch()")));
- (NSString *)printLeadArrayOfLeadNumber:(NSMutableArray<XFWInt *> *)arrayOfLeadNumber __attribute__((swift_name("printLead(arrayOfLeadNumber:)")));
- (void)process __attribute__((swift_name("process()")));
- (BOOL)romheltPointScore __attribute__((swift_name("romheltPointScore()")));
- (BOOL)sagarBosaScore __attribute__((swift_name("sagarBosaScore()")));
- (BOOL)setValueParameterNumber:(int32_t)parameterNumber limitValueArray:(XFWKotlinDoubleArray *)limitValueArray indexValueArray:(XFWKotlinIntArray *)indexValueArray string:(NSString *)string sign:(NSString *)sign __attribute__((swift_name("setValue(parameterNumber:limitValueArray:indexValueArray:string:sign:)")));
- (int32_t)yesBranch __attribute__((swift_name("yesBranch()")));
- (int32_t)yesBranchA __attribute__((swift_name("yesBranchA()")));
- (NSMutableArray<XFWInt *> *)yesBranchB __attribute__((swift_name("yesBranchB()")));
- (int32_t)yesBranchC __attribute__((swift_name("yesBranchC()")));
- (int32_t)yesBranchSecond __attribute__((swift_name("yesBranchSecond()")));
@property (readonly) NSString * _Nullable anomaliesResult __attribute__((swift_name("anomaliesResult")));
@property (readonly) NSString * _Nullable interpretationResult __attribute__((swift_name("interpretationResult")));
@property (readonly) XFWRisk * _Nullable risk __attribute__((swift_name("risk")));
@property (readonly) NSString *suggestedAction __attribute__((swift_name("suggestedAction")));
@property (readonly) NSString *testEvaluationResult __attribute__((swift_name("testEvaluationResult")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Algo2022.Companion")))
@interface XFWAlgo2022Companion : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWAlgo2022Companion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ABNORMAL_ECG __attribute__((swift_name("ABNORMAL_ECG")));
@property (readonly) NSString *BRADYCARDIA_CRITICAL_ECG __attribute__((swift_name("BRADYCARDIA_CRITICAL_ECG")));
@property (readonly) NSString *BRADYCARDIA_NORMAL_ECG __attribute__((swift_name("BRADYCARDIA_NORMAL_ECG")));
@property (readonly) NSString *NORMAL_ECG __attribute__((swift_name("NORMAL_ECG")));
@property (readonly) NSString *TACHYCARDIA_CRITICAL_ECG __attribute__((swift_name("TACHYCARDIA_CRITICAL_ECG")));
@property (readonly) NSString *TACHYCARDIA_NORMAL_ECG __attribute__((swift_name("TACHYCARDIA_NORMAL_ECG")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Arrhythmia")))
@interface XFWArrhythmia : XFWBase
- (instancetype)initWithEcgCharacteristics:(XFWEcgCharacteristics * _Nullable)ecgCharacteristics signal:(NSMutableArray<XFWDouble *> *)signal isEcgReport:(BOOL)isEcgReport fft:(XFWFFT *)fft __attribute__((swift_name("init(ecgCharacteristics:signal:isEcgReport:fft:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) XFWArrhythmiaCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *abnormality __attribute__((swift_name("abnormality")));
@property (readonly) NSString *detection __attribute__((swift_name("detection")));
@property (readonly) NSString *pWaveCharacteristics __attribute__((swift_name("pWaveCharacteristics")));
@property (readonly) NSString *qRSCharacteristics __attribute__((swift_name("qRSCharacteristics")));
@property XFWTrapezoidal *trapezoidal __attribute__((swift_name("trapezoidal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Arrhythmia.Companion")))
@interface XFWArrhythmiaCompanion : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWArrhythmiaCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ArrhythmiaDiseases")))
@interface XFWArrhythmiaDiseases : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)arrhythmiaDiseases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWArrhythmiaDiseases *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *AF_BBB_AB_AP __attribute__((swift_name("AF_BBB_AB_AP")));
@property (readonly) NSString *ATRIAL_FIBRILLATION __attribute__((swift_name("ATRIAL_FIBRILLATION")));
@property (readonly) NSString *ATRIAL_FLUTTER __attribute__((swift_name("ATRIAL_FLUTTER")));
@property (readonly) NSString *ATRIAL_RHYTHM __attribute__((swift_name("ATRIAL_RHYTHM")));
@property (readonly) NSString *ATRIAL_TACHYCARDIA __attribute__((swift_name("ATRIAL_TACHYCARDIA")));
@property (readonly) NSString *AT_BBB_AB __attribute__((swift_name("AT_BBB_AB")));
@property (readonly) NSString *AVNRT_AVRT_JT __attribute__((swift_name("AVNRT_AVRT_JT")));
@property (readonly) NSString *AVNRT_AVRT_JT_BBB_AB_VT_VFL_ST_HK __attribute__((swift_name("AVNRT_AVRT_JT_BBB_AB_VT_VFL_ST_HK")));
@property (readonly) NSString *JR_BBB_VR __attribute__((swift_name("JR_BBB_VR")));
@property (readonly) NSString *JUNCTIONAL_RHYTHM __attribute__((swift_name("JUNCTIONAL_RHYTHM")));
@property (readonly) NSString *PVT __attribute__((swift_name("PVT")));
@property (readonly) NSString *REGULAR_RHYTHM_VARIABLE_AV_BLOCK __attribute__((swift_name("REGULAR_RHYTHM_VARIABLE_AV_BLOCK")));
@property (readonly) NSString *REGULAR_RHYTHM_VARIABLE_AV_BLOCK_BBB __attribute__((swift_name("REGULAR_RHYTHM_VARIABLE_AV_BLOCK_BBB")));
@property (readonly) NSString *SINUS_ARRHYTHMIA __attribute__((swift_name("SINUS_ARRHYTHMIA")));
@property (readonly) NSString *SINUS_RHYTHM __attribute__((swift_name("SINUS_RHYTHM")));
@property (readonly) NSString *SINUS_TACHYCARDIA __attribute__((swift_name("SINUS_TACHYCARDIA")));
@property (readonly) NSString *SLOW_ATRIAL_FIBRILLATION __attribute__((swift_name("SLOW_ATRIAL_FIBRILLATION")));
@property (readonly) NSString *ST_AT __attribute__((swift_name("ST_AT")));
@property (readonly) NSString *ST_AT_BB_Ab __attribute__((swift_name("ST_AT_BB_Ab")));
@property (readonly) NSString *VENTRICULAR_FIBRILLATION __attribute__((swift_name("VENTRICULAR_FIBRILLATION")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ArrhythmiaDiseases.ECGAbnormality")))
@interface XFWArrhythmiaDiseasesECGAbnormality : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eCGAbnormality __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWArrhythmiaDiseasesECGAbnormality *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ABNORMAL __attribute__((swift_name("ABNORMAL")));
@property (readonly) NSString *BORDERLINE __attribute__((swift_name("BORDERLINE")));
@property (readonly) NSString *NORMAL __attribute__((swift_name("NORMAL")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ArrhythmiaDiseases.ECGDisease")))
@interface XFWArrhythmiaDiseasesECGDisease : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eCGDisease __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWArrhythmiaDiseasesECGDisease *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *AF_BBB_AB_AP __attribute__((swift_name("AF_BBB_AB_AP")));
@property (readonly) NSString *AT_BBB_AB __attribute__((swift_name("AT_BBB_AB")));
@property (readonly) NSString *AVNRT_AVRT_JT __attribute__((swift_name("AVNRT_AVRT_JT")));
@property (readonly) NSString *AVNRT_AVRT_JT_BBB_AB_VT_VFL_ST_HK __attribute__((swift_name("AVNRT_AVRT_JT_BBB_AB_VT_VFL_ST_HK")));
@property (readonly) NSString *ST_AT_BB_Ab __attribute__((swift_name("ST_AT_BB_Ab")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ArrhythmiaDiseases.QRSType")))
@interface XFWArrhythmiaDiseasesQRSType : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)qRSType __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWArrhythmiaDiseasesQRSType *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *NARROW __attribute__((swift_name("NARROW")));
@property (readonly) NSString *NORMAL __attribute__((swift_name("NORMAL")));
@property (readonly) NSString *WIDE __attribute__((swift_name("WIDE")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AugmentedLeadGenerator")))
@interface XFWAugmentedLeadGenerator : XFWBase
- (instancetype)initWithPLead1Points:(NSMutableArray<XFWDouble *> *)pLead1Points pLead2Points:(NSMutableArray<XFWDouble *> *)pLead2Points lead1EcgCharacteristics:(XFWEcgCharacteristics *)lead1EcgCharacteristics lead2EcgCharacteristics:(XFWEcgCharacteristics *)lead2EcgCharacteristics __attribute__((swift_name("init(pLead1Points:pLead2Points:lead1EcgCharacteristics:lead2EcgCharacteristics:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) XFWAugmentedLeadGeneratorCompanion *companion __attribute__((swift_name("companion")));
- (NSMutableArray<XFWDouble *> *)interpolationMagitudeArray:(NSMutableArray<XFWDouble *> *)magitudeArray indexArray:(NSMutableArray<XFWInt *> *)indexArray interpolationLength:(int32_t)interpolationLength __attribute__((swift_name("interpolation(magitudeArray:indexArray:interpolationLength:)")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)processAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("process()")));
@property (readonly) NSMutableArray<XFWDouble *> *aVfPoints __attribute__((swift_name("aVfPoints")));
@property (readonly) NSMutableArray<XFWDouble *> *aVlPoints __attribute__((swift_name("aVlPoints")));
@property (readonly) NSMutableArray<XFWDouble *> *aVrPoints __attribute__((swift_name("aVrPoints")));
@property NSMutableArray<XFWDouble *> *commonRPeaksForBothSignals __attribute__((swift_name("commonRPeaksForBothSignals")));
@property (readonly) NSMutableArray<XFWDouble *> *finalLead1Points __attribute__((swift_name("finalLead1Points")));
@property (readonly) NSMutableArray<XFWDouble *> *finalLead1PointsToFindAugmentedLeads __attribute__((swift_name("finalLead1PointsToFindAugmentedLeads")));
@property (readonly) NSMutableArray<XFWDouble *> *finalLead2Points __attribute__((swift_name("finalLead2Points")));
@property (readonly) NSMutableArray<XFWDouble *> *finalLead2PointsToFindAugmentedLeads __attribute__((swift_name("finalLead2PointsToFindAugmentedLeads")));
@property (readonly) NSMutableArray<XFWDouble *> *lead1Points __attribute__((swift_name("lead1Points")));
@property (readonly) NSMutableArray<XFWDouble *> *lead2Points __attribute__((swift_name("lead2Points")));
@property (readonly) NSMutableArray<XFWDouble *> *lead3Points __attribute__((swift_name("lead3Points")));
@property double pointsErasedFromLead1 __attribute__((swift_name("pointsErasedFromLead1")));
@property double pointsErasedFromLead2 __attribute__((swift_name("pointsErasedFromLead2")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AugmentedLeadGenerator.Companion")))
@interface XFWAugmentedLeadGeneratorCompanion : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWAugmentedLeadGeneratorCompanion *shared __attribute__((swift_name("shared")));
- (id<XFWKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseLineWandering")))
@interface XFWBaseLineWandering : XFWBase
- (instancetype)initWithSignal:(XFWKotlinDoubleArray *)signal reference:(XFWKotlinDoubleArray *)reference __attribute__((swift_name("init(signal:reference:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) XFWBaseLineWanderingCompanion *companion __attribute__((swift_name("companion")));
- (void)process __attribute__((swift_name("process()")));
@property XFWKotlinDoubleArray *filteredSignal __attribute__((swift_name("filteredSignal")));
@property BOOL isBaseLineWanderingPresent __attribute__((swift_name("isBaseLineWanderingPresent")));
@property BOOL isPowerLineInterferencePresent __attribute__((swift_name("isPowerLineInterferencePresent")));
@property XFWKotlinDoubleArray *reference __attribute__((swift_name("reference")));
@property XFWKotlinDoubleArray *signal __attribute__((swift_name("signal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseLineWandering.Companion")))
@interface XFWBaseLineWanderingCompanion : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWBaseLineWanderingCompanion *shared __attribute__((swift_name("shared")));
- (XFWKotlinDoubleArray *)DFTArray:(XFWKotlinDoubleArray *)array __attribute__((swift_name("DFT(array:)")));
- (XFWKotlinDoubleArray *)adaptiveArray:(XFWKotlinDoubleArray *)array array1:(XFWKotlinDoubleArray *)array1 var1:(int32_t)var1 var2:(int32_t)var2 __attribute__((swift_name("adaptive(array:array1:var1:var2:)")));
- (double)areaArray:(XFWKotlinDoubleArray *)array __attribute__((swift_name("area(array:)")));
- (double)averageArray:(XFWKotlinDoubleArray *)array __attribute__((swift_name("average(array:)")));
- (XFWKotlinDoubleArray *)convolutionArray:(XFWKotlinDoubleArray *)array array1:(XFWKotlinDoubleArray *)array1 var1:(int32_t)var1 var2:(int32_t)var2 var3:(int32_t)var3 __attribute__((swift_name("convolution(array:array1:var1:var2:var3:)")));
- (XFWKotlinDoubleArray *)extensionArray:(XFWKotlinDoubleArray *)array var:(int32_t)var __attribute__((swift_name("extension(array:var:)")));
- (XFWKotlinDoubleArray *)movingAverageArray:(XFWKotlinDoubleArray *)array var1:(int32_t)var1 var2:(int32_t)var2 var3:(int32_t)var3 __attribute__((swift_name("movingAverage(array:var1:var2:var3:)")));
- (double)varianceArray:(XFWKotlinDoubleArray *)array __attribute__((swift_name("variance(array:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Butterworth")))
@interface XFWButterworth : XFWBase
- (instancetype)initWithDt:(double)dt T:(double)T initVal:(XFWDouble * _Nullable)initVal __attribute__((swift_name("init(dt:T:initVal:)"))) __attribute__((objc_designated_initializer));
- (double)read __attribute__((swift_name("read()")));
- (void)resetInitVal:(XFWDouble * _Nullable)initVal __attribute__((swift_name("reset(initVal:)")));
- (double)runZ:(double)z __attribute__((swift_name("run(z:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ECGProcessing")))
@interface XFWECGProcessing : XFWBase
- (instancetype)initWithEcgPoints:(NSMutableArray<XFWDouble *> *)ecgPoints leadPosition:(int32_t)leadPosition applyFilter:(BOOL)applyFilter adjustRPeaks:(BOOL)adjustRPeaks ecgPointsForAugmentedLead:(NSMutableArray<XFWDouble *> * _Nullable)ecgPointsForAugmentedLead __attribute__((swift_name("init(ecgPoints:leadPosition:applyFilter:adjustRPeaks:ecgPointsForAugmentedLead:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) XFWECGProcessingCompanion *companion __attribute__((swift_name("companion")));
- (NSMutableArray<XFWDouble *> *)adjustRPeaksSignalOnConsideration:(NSMutableArray<XFWDouble *> *)signalOnConsideration seudoPoint:(NSMutableArray<XFWDouble *> *)seudoPoint __attribute__((swift_name("adjustRPeaks(signalOnConsideration:seudoPoint:)")));
- (double)calculateAugmentedSTElevationQrsStop:(NSMutableArray<XFWDouble *> *)qrsStop prStopIndices:(NSMutableArray<XFWDouble *> * _Nullable)prStopIndices augmentedSignalData:(NSMutableArray<XFWDouble *> *)augmentedSignalData __attribute__((swift_name("calculateAugmentedSTElevation(qrsStop:prStopIndices:augmentedSignalData:)")));
- (NSMutableArray<XFWDouble *> *)calculateRPointsSignal:(NSMutableArray<XFWDouble *> *)signal __attribute__((swift_name("calculateRPoints(signal:)")));
- (XFWEcgCharacteristics *)featuresRPeaks:(NSMutableArray<XFWDouble *> *)rPeaks pPointIndices:(NSMutableArray<XFWDouble *> *)pPointIndices qPointIndices:(NSMutableArray<XFWDouble *> *)qPointIndices sPointIndices:(NSMutableArray<XFWDouble *> *)sPointIndices tPointIndices:(NSMutableArray<XFWDouble *> *)tPointIndices __attribute__((swift_name("features(rPeaks:pPointIndices:qPointIndices:sPointIndices:tPointIndices:)")));
- (NSMutableArray<XFWDouble *> *)maxMinSignal:(NSMutableArray<XFWDouble *> *)signal points:(NSMutableArray<XFWDouble *> *)points key:(int32_t)key __attribute__((swift_name("maxMin(signal:points:key:)")));
- (void)processRPointsForAug:(NSMutableArray<XFWDouble *> * _Nullable)rPointsForAug sPointsForAug:(NSMutableArray<XFWDouble *> * _Nullable)sPointsForAug qPointsForAug:(NSMutableArray<XFWDouble *> * _Nullable)qPointsForAug pPointsForAug:(NSMutableArray<XFWDouble *> * _Nullable)pPointsForAug tPointsForAug:(NSMutableArray<XFWDouble *> * _Nullable)tPointsForAug __attribute__((swift_name("process(rPointsForAug:sPointsForAug:qPointsForAug:pPointsForAug:tPointsForAug:)")));
- (XFWEcgCharacteristics *)processForAugmentedLeadPPointsLead2:(NSMutableArray<XFWDouble *> *)pPointsLead2 qPointsLead2:(NSMutableArray<XFWDouble *> *)qPointsLead2 rPointsLead2:(NSMutableArray<XFWDouble *> *)rPointsLead2 sPointsLead2:(NSMutableArray<XFWDouble *> *)sPointsLead2 tPointsLead2:(NSMutableArray<XFWDouble *> *)tPointsLead2 __attribute__((swift_name("processForAugmentedLead(pPointsLead2:qPointsLead2:rPointsLead2:sPointsLead2:tPointsLead2:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property double averagePAmplitudeInLead __attribute__((swift_name("averagePAmplitudeInLead")));
@property double averageQAmplitudeInLead __attribute__((swift_name("averageQAmplitudeInLead")));
@property double averageRAmplitudeInLead __attribute__((swift_name("averageRAmplitudeInLead")));
@property double averageSAmplitudeInLead __attribute__((swift_name("averageSAmplitudeInLead")));
@property double averageTAmplitudeInLead __attribute__((swift_name("averageTAmplitudeInLead")));
@property BOOL concavity __attribute__((swift_name("concavity")));
@property (readonly) int32_t firstRPeakPoint __attribute__((swift_name("firstRPeakPoint")));
@property int32_t heartRate __attribute__((swift_name("heartRate")));
@property (readonly) BOOL isEcgSignalCompatibleForProcessing __attribute__((swift_name("isEcgSignalCompatibleForProcessing")));
@property double msDifference __attribute__((swift_name("msDifference")));
@property (readonly) NSMutableArray<XFWDouble *> *pPoints __attribute__((swift_name("pPoints")));
@property double pWidth __attribute__((swift_name("pWidth")));
@property (readonly) int32_t prInterval __attribute__((swift_name("prInterval")));
@property NSMutableArray<XFWDouble *> *prStartIndices __attribute__((swift_name("prStartIndices")));
@property (readonly) NSMutableArray<XFWDouble *> *prStopIndices __attribute__((swift_name("prStopIndices")));
@property (readonly) NSMutableArray<XFWDouble *> *qPoints __attribute__((swift_name("qPoints")));
@property (readonly) NSMutableArray<XFWDouble *> *qRSIntervals __attribute__((swift_name("qRSIntervals")));
@property double qTcInterval __attribute__((swift_name("qTcInterval")));
@property BOOL qrsDirectionUpward __attribute__((swift_name("qrsDirectionUpward")));
@property (readonly) int32_t qrsInterval __attribute__((swift_name("qrsInterval")));
@property (readonly) int32_t qtInterval __attribute__((swift_name("qtInterval")));
@property (readonly) NSMutableArray<XFWDouble *> *rPeakPoints __attribute__((swift_name("rPeakPoints")));
@property (readonly) int32_t rrInterval __attribute__((swift_name("rrInterval")));
@property (readonly) NSMutableArray<XFWDouble *> *rrIntervals __attribute__((swift_name("rrIntervals")));
@property (readonly) NSMutableArray<XFWDouble *> *sPoints __attribute__((swift_name("sPoints")));
@property double stSegmentInMv __attribute__((swift_name("stSegmentInMv")));
@property (readonly) NSMutableArray<XFWDouble *> *tPoints __attribute__((swift_name("tPoints")));
@property (readonly) NSMutableArray<XFWDouble *> *tWaveEndPoints __attribute__((swift_name("tWaveEndPoints")));
@property double tWidth __attribute__((swift_name("tWidth")));
@property double valueRS __attribute__((swift_name("valueRS")));
@property double ventricularActivationLOR __attribute__((swift_name("ventricularActivationLOR")));
@property double ventricularActivationROR __attribute__((swift_name("ventricularActivationROR")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ECGProcessing.Companion")))
@interface XFWECGProcessingCompanion : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWECGProcessingCompanion *shared __attribute__((swift_name("shared")));
- (int32_t)getFirstPeakIndexEcgPoints:(NSMutableArray<XFWDouble *> *)ecgPoints __attribute__((swift_name("getFirstPeakIndex(ecgPoints:)")));
- (BOOL)isEcgSignalCompatibleForProcessingEcgPoints:(NSMutableArray<XFWDouble *> *)ecgPoints __attribute__((swift_name("isEcgSignalCompatibleForProcessing(ecgPoints:)")));
@property (readonly) NSString *RETAKE_MSG __attribute__((swift_name("RETAKE_MSG")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FFT")))
@interface XFWFFT : XFWBase
- (instancetype)initWithX:(NSMutableArray<XFWDouble *> *)x y:(NSMutableArray<XFWDouble *> *)y __attribute__((swift_name("init(x:y:)"))) __attribute__((objc_designated_initializer));
- (NSMutableArray<XFWDouble *> *)component1 __attribute__((swift_name("component1()")));
- (NSMutableArray<XFWDouble *> *)component2 __attribute__((swift_name("component2()")));
- (XFWFFT *)doCopyX:(NSMutableArray<XFWDouble *> *)x y:(NSMutableArray<XFWDouble *> *)y __attribute__((swift_name("doCopy(x:y:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSMutableArray<XFWDouble *> *x __attribute__((swift_name("x")));
@property (readonly) NSMutableArray<XFWDouble *> *y __attribute__((swift_name("y")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FFTComputation")))
@interface XFWFFTComputation : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fFTComputation __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWFFTComputation *shared __attribute__((swift_name("shared")));
- (XFWKotlinDoubleArray *)DFTArray:(XFWKotlinDoubleArray *)array __attribute__((swift_name("DFT(array:)")));
- (NSMutableArray<XFWDouble *> *)computeFFTInputSignal:(XFWKotlinDoubleArray *)inputSignal __attribute__((swift_name("computeFFT(inputSignal:)")));
- (NSMutableArray<XFWDouble *> *)getLinespaceSampFreq:(float)sampFreq fft:(NSMutableArray<XFWDouble *> *)fft __attribute__((swift_name("getLinespace(sampFreq:fft:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FFTComputation.Linspace")))
@interface XFWFFTComputationLinspace : XFWBase
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
@property (readonly) double nextFloat __attribute__((swift_name("nextFloat")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Filters")))
@interface XFWFilters : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)filters __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWFilters *shared __attribute__((swift_name("shared")));
- (XFWKotlinDoubleArray *)arraySubtractFrom:(XFWKotlinDoubleArray *)from array:(XFWKotlinDoubleArray *)array length:(int32_t)length __attribute__((swift_name("arraySubtract(from:array:length:)")));
- (XFWKotlinDoubleArray *)arraySubtractFrom:(NSMutableArray<XFWDouble *> *)from array:(NSMutableArray<XFWDouble *> *)array length_:(int32_t)length __attribute__((swift_name("arraySubtract(from:array:length_:)")));
- (XFWKotlinDoubleArray *)derivativeSignal:(XFWKotlinDoubleArray *)signal __attribute__((swift_name("derivative(signal:)")));
- (XFWKotlinDoubleArray *)highPassFilterSignal:(XFWKotlinDoubleArray *)signal cutOffFreq:(double)cutOffFreq __attribute__((swift_name("highPassFilter(signal:cutOffFreq:)")));
- (XFWKotlinDoubleArray *)integralSignal:(XFWKotlinDoubleArray *)signal __attribute__((swift_name("integral(signal:)")));
- (XFWKotlinDoubleArray *)integral2Signal:(XFWKotlinDoubleArray *)signal __attribute__((swift_name("integral2(signal:)")));
- (XFWKotlinDoubleArray *)lowPassFilterSignal:(XFWKotlinDoubleArray *)signal cutOffFreq:(double)cutOffFreq __attribute__((swift_name("lowPassFilter(signal:cutOffFreq:)")));
- (double)meanList:(XFWKotlinDoubleArray *)list __attribute__((swift_name("mean(list:)")));
- (double)meanList_:(NSMutableArray<XFWDouble *> *)list __attribute__((swift_name("mean(list_:)")));
- (XFWKotlinDoubleArray *)movingAverageSignal:(XFWKotlinDoubleArray *)signal __attribute__((swift_name("movingAverage(signal:)")));
- (NSMutableArray<XFWDouble *> *)movingAverageSignal_:(NSMutableArray<XFWDouble *> *)signal __attribute__((swift_name("movingAverage(signal_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HRV")))
@interface XFWHRV : XFWBase
- (instancetype)initWithEcgCharacteristics:(XFWEcgCharacteristics * _Nullable)ecgCharacteristics age:(int32_t)age fft:(XFWFFT *)fft ecgPoints:(NSMutableArray<XFWDouble *> *)ecgPoints __attribute__((swift_name("init(ecgCharacteristics:age:fft:ecgPoints:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) XFWHRVCompanion *companion __attribute__((swift_name("companion")));
- (NSMutableArray<XFWDouble *> *)getECGPointsPerMinuteI:(int32_t)i __attribute__((swift_name("getECGPointsPerMinute(i:)")));
- (BOOL)process __attribute__((swift_name("process()")));
@property (readonly) XFWKotlinIntArray *avgBPMPerMin __attribute__((swift_name("avgBPMPerMin")));
@property (readonly) NSMutableArray<XFWDouble *> *fifthMinuteECGPoints __attribute__((swift_name("fifthMinuteECGPoints")));
@property (readonly) NSMutableArray<XFWDouble *> *fourthMinuteECGPoints __attribute__((swift_name("fourthMinuteECGPoints")));
@property (readonly) double hF __attribute__((swift_name("hF")));
@property (readonly) NSString *heartElectricalStability __attribute__((swift_name("heartElectricalStability")));
@property (readonly) NSString *heartHealthAnalysis __attribute__((swift_name("heartHealthAnalysis")));
@property (readonly) NSString *hrvConclusion __attribute__((swift_name("hrvConclusion")));
@property (readonly) BOOL isAbnormalityInHRVPresent __attribute__((swift_name("isAbnormalityInHRVPresent")));
@property (readonly) double lF __attribute__((swift_name("lF")));
@property (readonly) double lFbyHFRatio __attribute__((swift_name("lFbyHFRatio")));
@property (readonly) double nn50 __attribute__((swift_name("nn50")));
@property (readonly) double rmsddn __attribute__((swift_name("rmsddn")));
@property (readonly) double sdann __attribute__((swift_name("sdann")));
@property (readonly) double sddn __attribute__((swift_name("sddn")));
@property (readonly) NSMutableArray<XFWDouble *> *secondMinuteECGPoints __attribute__((swift_name("secondMinuteECGPoints")));
@property (readonly) NSString *stressCopingAbility __attribute__((swift_name("stressCopingAbility")));
@property (readonly) NSMutableArray<XFWDouble *> *thirdMinuteECGPoints __attribute__((swift_name("thirdMinuteECGPoints")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HRV.Companion")))
@interface XFWHRVCompanion : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWHRVCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReSampler")))
@interface XFWReSampler : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)reSampler __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWReSampler *shared __attribute__((swift_name("shared")));
- (NSMutableArray<XFWDouble *> *)downSampleSample:(NSMutableArray<XFWDouble *> *)sample factor:(int32_t)factor __attribute__((swift_name("downSample(sample:factor:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Respiration")))
@interface XFWRespiration : XFWBase
- (instancetype)initWithEcgPoints:(NSMutableArray<XFWDouble *> *)ecgPoints __attribute__((swift_name("init(ecgPoints:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) XFWRespirationCompanion *companion __attribute__((swift_name("companion")));
- (void)process __attribute__((swift_name("process()")));
@property (readonly) float bpm __attribute__((swift_name("bpm")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Respiration.Companion")))
@interface XFWRespirationCompanion : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWRespirationCompanion *shared __attribute__((swift_name("shared")));
- (XFWKotlinDoubleArray *)extensionArray:(XFWKotlinDoubleArray *)array var:(int32_t)var __attribute__((swift_name("extension(array:var:)")));
- (XFWKotlinDoubleArray *)interpolateSignal:(NSMutableArray<XFWDouble *> *)signal x:(XFWKotlinDoubleArray *)x t:(XFWKotlinIntArray *)t __attribute__((swift_name("interpolate(signal:x:t:)")));
- (XFWKotlinDoubleArray *)movingAverageArray:(XFWKotlinDoubleArray *)array var1:(int32_t)var1 var2:(int32_t)var2 var3:(int32_t)var3 __attribute__((swift_name("movingAverage(array:var1:var2:var3:)")));
- (double)sortMPass:(XFWKotlinDoubleArray *)Pass __attribute__((swift_name("sortM(Pass:)")));
- (int32_t)sortTPass:(XFWKotlinDoubleArray *)Pass Pass_T:(XFWKotlinIntArray *)Pass_T __attribute__((swift_name("sortT(Pass:Pass_T:)")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol XFWKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface XFWKotlinEnum<E> : XFWBase <XFWKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) XFWKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Risk")))
@interface XFWRisk : XFWKotlinEnum<XFWRisk *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) XFWRisk *lowRisk __attribute__((swift_name("lowRisk")));
@property (class, readonly) XFWRisk *mildRisk __attribute__((swift_name("mildRisk")));
@property (class, readonly) XFWRisk *moderateRisk __attribute__((swift_name("moderateRisk")));
@property (class, readonly) XFWRisk *highRisk __attribute__((swift_name("highRisk")));
+ (XFWKotlinArray<XFWRisk *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("STMI")))
@interface XFWSTMI : XFWBase
- (instancetype)initWithEcgData:(XFWSevenLeadData *)ecgData ecgCharacteristics:(XFWEcgCharacteristics * _Nullable)ecgCharacteristics __attribute__((swift_name("init(ecgData:ecgCharacteristics:)"))) __attribute__((objc_designated_initializer));
- (void)process __attribute__((swift_name("process()")));
@property (readonly) NSString *abnormality __attribute__((swift_name("abnormality")));
@property (readonly) NSString *qrsType __attribute__((swift_name("qrsType")));
@property (readonly) NSString *qtIntervalType __attribute__((swift_name("qtIntervalType")));
@property (readonly) NSString *stType __attribute__((swift_name("stType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Trapezoidal")))
@interface XFWTrapezoidal : XFWBase
- (instancetype)initWithSignal:(NSMutableArray<XFWDouble *> *)signal __attribute__((swift_name("init(signal:)"))) __attribute__((objc_designated_initializer));
- (double)calculateAreaFromX:(int32_t)fromX toX:(int32_t)toX __attribute__((swift_name("calculateArea(fromX:toX:)")));
- (double)calculateFFTAreaFromFreq:(double)fromFreq toFreq:(double)toFreq freqs:(NSMutableArray<XFWDouble *> *)freqs __attribute__((swift_name("calculateFFTArea(fromFreq:toFreq:freqs:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TwelveLeadDetection")))
@interface XFWTwelveLeadDetection : XFWBase
- (instancetype)initWithTwelveLeadEcgCharacteristics:(NSMutableArray<id> *)twelveLeadEcgCharacteristics twelveLeadData:(XFWTwelveLeadData *)twelveLeadData __attribute__((swift_name("init(twelveLeadEcgCharacteristics:twelveLeadData:)"))) __attribute__((objc_designated_initializer));
- (XFWBiPhasicTPointsData *)calculateBiPhasicTPointsPrStart:(NSMutableArray<XFWDouble *> *)prStart signal:(NSMutableArray<XFWDouble *> *)signal tPoints:(NSMutableArray<XFWDouble *> *)tPoints qPoints:(NSMutableArray<XFWDouble *> *)qPoints rPeakPoints:(NSMutableArray<XFWDouble *> *)rPeakPoints leadPosition:(int32_t)leadPosition __attribute__((swift_name("calculateBiPhasicTPoints(prStart:signal:tPoints:qPoints:rPeakPoints:leadPosition:)")));
- (void)process __attribute__((swift_name("process()")));
@property (readonly) NSString *anomalies __attribute__((swift_name("anomalies")));
@property NSString *biPhasicTWaveString __attribute__((swift_name("biPhasicTWaveString")));
@property (readonly) NSString *detection __attribute__((swift_name("detection")));
@property (readonly) NSString *ecgType __attribute__((swift_name("ecgType")));
@property NSString *invertedTWaveString __attribute__((swift_name("invertedTWaveString")));
@property (readonly) NSString *recommendation __attribute__((swift_name("recommendation")));
@property (readonly) XFWRisk *risk __attribute__((swift_name("risk")));
@property NSString *stDepressionString __attribute__((swift_name("stDepressionString")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TwelveLeadDetection.EcgPosition")))
@interface XFWTwelveLeadDetectionEcgPosition : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)ecgPosition __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWTwelveLeadDetectionEcgPosition *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t AVF __attribute__((swift_name("AVF")));
@property (readonly) int32_t AVL __attribute__((swift_name("AVL")));
@property (readonly) int32_t AVR __attribute__((swift_name("AVR")));
@property (readonly) int32_t LEAD_1 __attribute__((swift_name("LEAD_1")));
@property (readonly) int32_t LEAD_2 __attribute__((swift_name("LEAD_2")));
@property (readonly) int32_t LEAD_3 __attribute__((swift_name("LEAD_3")));
@property (readonly) int32_t V1 __attribute__((swift_name("V1")));
@property (readonly) int32_t V2 __attribute__((swift_name("V2")));
@property (readonly) int32_t V3 __attribute__((swift_name("V3")));
@property (readonly) int32_t V4 __attribute__((swift_name("V4")));
@property (readonly) int32_t V5 __attribute__((swift_name("V5")));
@property (readonly) int32_t V6 __attribute__((swift_name("V6")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HeartRiskCalculator")))
@interface XFWHeartRiskCalculator : XFWBase
- (instancetype)initWithIsSmoker:(BOOL)isSmoker gender:(XFWGender *)gender age:(int32_t)age isNormal:(BOOL)isNormal systolicBP:(int32_t)systolicBP totalCholesterol:(int32_t)totalCholesterol hdlCholesterol:(int32_t)hdlCholesterol isDoctor:(BOOL)isDoctor haveSymptoms:(BOOL)haveSymptoms __attribute__((swift_name("init(isSmoker:gender:age:isNormal:systolicBP:totalCholesterol:hdlCholesterol:isDoctor:haveSymptoms:)"))) __attribute__((objc_designated_initializer));
- (XFWHeartRiskAssessmentResult *)process __attribute__((swift_name("process()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Recommendations")))
@interface XFWRecommendations : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)recommendations __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWRecommendations *shared __attribute__((swift_name("shared")));
@property (readonly) XFWDietRecommendation *DIETARY_RECOMMENDATION __attribute__((swift_name("DIETARY_RECOMMENDATION")));
@property (readonly) NSString *MILD_RISK_A_SUBJECT_LINE __attribute__((swift_name("MILD_RISK_A_SUBJECT_LINE")));
@property (readonly) NSString *MILD_RISK_B_SUBJECT_LINE __attribute__((swift_name("MILD_RISK_B_SUBJECT_LINE")));
@property (readonly) XFWDrugRecommendation *NON_PHYSICIAN_CARDIOVASCULAR_RISK_10_TO_20 __attribute__((swift_name("NON_PHYSICIAN_CARDIOVASCULAR_RISK_10_TO_20")));
@property (readonly) XFWDrugRecommendation *NON_PHYSICIAN_CARDIOVASCULAR_RISK_20_TO_30 __attribute__((swift_name("NON_PHYSICIAN_CARDIOVASCULAR_RISK_20_TO_30")));
@property (readonly) XFWDrugRecommendation *NON_PHYSICIAN_CARDIOVASCULAR_RISK_30_PLUS __attribute__((swift_name("NON_PHYSICIAN_CARDIOVASCULAR_RISK_30_PLUS")));
@property (readonly) XFWDrugRecommendation *PHYSICIAN_CARDIOVASCULAR_RISK_10_TO_20 __attribute__((swift_name("PHYSICIAN_CARDIOVASCULAR_RISK_10_TO_20")));
@property (readonly) XFWDrugRecommendation *PHYSICIAN_CARDIOVASCULAR_RISK_20_TO_30 __attribute__((swift_name("PHYSICIAN_CARDIOVASCULAR_RISK_20_TO_30")));
@property (readonly) XFWDrugRecommendation *PHYSICIAN_CARDIOVASCULAR_RISK_30_PLUS __attribute__((swift_name("PHYSICIAN_CARDIOVASCULAR_RISK_30_PLUS")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Gender")))
@interface XFWGender : XFWKotlinEnum<XFWGender *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) XFWGender *male __attribute__((swift_name("male")));
@property (class, readonly) XFWGender *female __attribute__((swift_name("female")));
@property (class, readonly) XFWGender *other __attribute__((swift_name("other")));
+ (XFWKotlinArray<XFWGender *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Relation")))
@interface XFWRelation : XFWKotlinEnum<XFWRelation *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) XFWRelation *lessThan __attribute__((swift_name("lessThan")));
@property (class, readonly) XFWRelation *greaterThan __attribute__((swift_name("greaterThan")));
@property (class, readonly) XFWRelation *equalTo __attribute__((swift_name("equalTo")));
+ (XFWKotlinArray<XFWRelation *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RiskLevel")))
@interface XFWRiskLevel : XFWKotlinEnum<XFWRiskLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) XFWRiskLevel *low __attribute__((swift_name("low")));
@property (class, readonly) XFWRiskLevel *moderate __attribute__((swift_name("moderate")));
@property (class, readonly) XFWRiskLevel *high __attribute__((swift_name("high")));
@property (class, readonly) XFWRiskLevel *critical __attribute__((swift_name("critical")));
+ (XFWKotlinArray<XFWRiskLevel *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DietRecommendation")))
@interface XFWDietRecommendation : XFWBase
- (instancetype)initWithDietaryChanges:(NSString *)dietaryChanges physicalActivity:(NSString *)physicalActivity weightControl:(NSString *)weightControl alcoholIntake:(NSString *)alcoholIntake __attribute__((swift_name("init(dietaryChanges:physicalActivity:weightControl:alcoholIntake:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (XFWDietRecommendation *)doCopyDietaryChanges:(NSString *)dietaryChanges physicalActivity:(NSString *)physicalActivity weightControl:(NSString *)weightControl alcoholIntake:(NSString *)alcoholIntake __attribute__((swift_name("doCopy(dietaryChanges:physicalActivity:weightControl:alcoholIntake:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *alcoholIntake __attribute__((swift_name("alcoholIntake")));
@property NSString *dietaryChanges __attribute__((swift_name("dietaryChanges")));
@property NSString *physicalActivity __attribute__((swift_name("physicalActivity")));
@property NSString *weightControl __attribute__((swift_name("weightControl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DrugRecommendation")))
@interface XFWDrugRecommendation : XFWBase
- (instancetype)initWithSubjectLine:(NSString *)subjectLine antiHypertensiveDrugs:(NSString *)antiHypertensiveDrugs lipidLoweringDrugs:(NSString *)lipidLoweringDrugs hypoGlymicDrugs:(NSString *)hypoGlymicDrugs antiPlateletDrugs:(NSString *)antiPlateletDrugs notRecommendedDrugs:(NSString *)notRecommendedDrugs __attribute__((swift_name("init(subjectLine:antiHypertensiveDrugs:lipidLoweringDrugs:hypoGlymicDrugs:antiPlateletDrugs:notRecommendedDrugs:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (XFWDrugRecommendation *)doCopySubjectLine:(NSString *)subjectLine antiHypertensiveDrugs:(NSString *)antiHypertensiveDrugs lipidLoweringDrugs:(NSString *)lipidLoweringDrugs hypoGlymicDrugs:(NSString *)hypoGlymicDrugs antiPlateletDrugs:(NSString *)antiPlateletDrugs notRecommendedDrugs:(NSString *)notRecommendedDrugs __attribute__((swift_name("doCopy(subjectLine:antiHypertensiveDrugs:lipidLoweringDrugs:hypoGlymicDrugs:antiPlateletDrugs:notRecommendedDrugs:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *antiHypertensiveDrugs __attribute__((swift_name("antiHypertensiveDrugs")));
@property (readonly) NSString *antiPlateletDrugs __attribute__((swift_name("antiPlateletDrugs")));
@property (readonly) NSString *hypoGlymicDrugs __attribute__((swift_name("hypoGlymicDrugs")));
@property (readonly) NSString *lipidLoweringDrugs __attribute__((swift_name("lipidLoweringDrugs")));
@property (readonly) NSString *notRecommendedDrugs __attribute__((swift_name("notRecommendedDrugs")));
@property (readonly) NSString *subjectLine __attribute__((swift_name("subjectLine")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HeartRiskAssessmentResult")))
@interface XFWHeartRiskAssessmentResult : XFWBase
- (instancetype)initWithRelation:(XFWRelation *)relation riskPercentageValue:(int32_t)riskPercentageValue riskLevel:(XFWRiskLevel *)riskLevel hrs:(int32_t)hrs subjectLine:(NSString *)subjectLine dietRecommendation:(XFWDietRecommendation * _Nullable)dietRecommendation drugRecommendation:(XFWDrugRecommendation * _Nullable)drugRecommendation __attribute__((swift_name("init(relation:riskPercentageValue:riskLevel:hrs:subjectLine:dietRecommendation:drugRecommendation:)"))) __attribute__((objc_designated_initializer));
- (XFWRelation *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (XFWRiskLevel *)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (XFWDietRecommendation * _Nullable)component6 __attribute__((swift_name("component6()")));
- (XFWDrugRecommendation * _Nullable)component7 __attribute__((swift_name("component7()")));
- (XFWHeartRiskAssessmentResult *)doCopyRelation:(XFWRelation *)relation riskPercentageValue:(int32_t)riskPercentageValue riskLevel:(XFWRiskLevel *)riskLevel hrs:(int32_t)hrs subjectLine:(NSString *)subjectLine dietRecommendation:(XFWDietRecommendation * _Nullable)dietRecommendation drugRecommendation:(XFWDrugRecommendation * _Nullable)drugRecommendation __attribute__((swift_name("doCopy(relation:riskPercentageValue:riskLevel:hrs:subjectLine:dietRecommendation:drugRecommendation:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) XFWDietRecommendation * _Nullable dietRecommendation __attribute__((swift_name("dietRecommendation")));
@property (readonly) XFWDrugRecommendation * _Nullable drugRecommendation __attribute__((swift_name("drugRecommendation")));
@property (readonly) int32_t hrs __attribute__((swift_name("hrs")));
@property (readonly) XFWRelation *relation __attribute__((swift_name("relation")));
@property (readonly) XFWRiskLevel *riskLevel __attribute__((swift_name("riskLevel")));
@property (readonly) int32_t riskPercentageValue __attribute__((swift_name("riskPercentageValue")));
@property (readonly) NSString *subjectLine __attribute__((swift_name("subjectLine")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Risk_")))
@interface XFWRisk_ : XFWBase
- (instancetype)initWithRelation:(XFWRelation *)relation value:(int32_t)value riskLevel:(XFWRiskLevel *)riskLevel __attribute__((swift_name("init(relation:value:riskLevel:)"))) __attribute__((objc_designated_initializer));
- (XFWRelation *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (XFWRiskLevel *)component3 __attribute__((swift_name("component3()")));
- (XFWRisk_ *)doCopyRelation:(XFWRelation *)relation value:(int32_t)value riskLevel:(XFWRiskLevel *)riskLevel __attribute__((swift_name("doCopy(relation:value:riskLevel:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) XFWRelation *relation __attribute__((swift_name("relation")));
@property (readonly) XFWRiskLevel *riskLevel __attribute__((swift_name("riskLevel")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Matrices")))
@interface XFWMatrices : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)matrices __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWMatrices *shared __attribute__((swift_name("shared")));
@property (readonly) XFWKotlinArray<XFWKotlinArray<XFWInt *> *> *AGE_MATRIX __attribute__((swift_name("AGE_MATRIX")));
@property (readonly) XFWKotlinArray<XFWKotlinArray<XFWInt *> *> *FEMALE_HDL_CHOLESTEROL_MATRIX __attribute__((swift_name("FEMALE_HDL_CHOLESTEROL_MATRIX")));
@property (readonly) XFWKotlinArray<XFWKotlinArray<XFWInt *> *> *FEMALE_SMOKER_MATRIX __attribute__((swift_name("FEMALE_SMOKER_MATRIX")));
@property (readonly) XFWKotlinArray<XFWKotlinArray<XFWInt *> *> *FEMALE_SYSTOLIC_BP_MATRIX __attribute__((swift_name("FEMALE_SYSTOLIC_BP_MATRIX")));
@property (readonly) XFWKotlinArray<XFWKotlinArray<XFWInt *> *> *FEMALE_TOTAL_CHOLESTEROL_MATRIX __attribute__((swift_name("FEMALE_TOTAL_CHOLESTEROL_MATRIX")));
@property (readonly) XFWKotlinArray<XFWKotlinArray<XFWInt *> *> *MALE_HDL_CHOLESTEROL_MATRIX __attribute__((swift_name("MALE_HDL_CHOLESTEROL_MATRIX")));
@property (readonly) XFWKotlinArray<XFWKotlinArray<XFWInt *> *> *MALE_SMOKER_MATRIX __attribute__((swift_name("MALE_SMOKER_MATRIX")));
@property (readonly) XFWKotlinArray<XFWKotlinArray<XFWInt *> *> *MALE_SYSTOLIC_BP_MATRIX __attribute__((swift_name("MALE_SYSTOLIC_BP_MATRIX")));
@property (readonly) XFWKotlinArray<XFWKotlinArray<XFWInt *> *> *MALE_TOTAL_CHOLESTEROL_MATRIX __attribute__((swift_name("MALE_TOTAL_CHOLESTEROL_MATRIX")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProcessorType")))
@interface XFWProcessorType : XFWKotlinEnum<XFWProcessorType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) XFWProcessorType *sevenLead __attribute__((swift_name("sevenLead")));
@property (class, readonly) XFWProcessorType *twelveLead __attribute__((swift_name("twelveLead")));
@property (class, readonly) XFWProcessorType *leadTwo __attribute__((swift_name("leadTwo")));
@property (class, readonly) XFWProcessorType *hrv __attribute__((swift_name("hrv")));
@property (class, readonly) XFWProcessorType *liveMonitor __attribute__((swift_name("liveMonitor")));
+ (XFWKotlinArray<XFWProcessorType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BiPhasicTPointsData")))
@interface XFWBiPhasicTPointsData : XFWBase
- (instancetype)initWithAvgDepressionInTPoints:(double)avgDepressionInTPoints avgDepressionInBiPhasicTPoints:(double)avgDepressionInBiPhasicTPoints biPhasicTPoints:(NSMutableArray<XFWDouble *> *)biPhasicTPoints __attribute__((swift_name("init(avgDepressionInTPoints:avgDepressionInBiPhasicTPoints:biPhasicTPoints:)"))) __attribute__((objc_designated_initializer));
- (double)component1 __attribute__((swift_name("component1()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (NSMutableArray<XFWDouble *> *)component3 __attribute__((swift_name("component3()")));
- (XFWBiPhasicTPointsData *)doCopyAvgDepressionInTPoints:(double)avgDepressionInTPoints avgDepressionInBiPhasicTPoints:(double)avgDepressionInBiPhasicTPoints biPhasicTPoints:(NSMutableArray<XFWDouble *> *)biPhasicTPoints __attribute__((swift_name("doCopy(avgDepressionInTPoints:avgDepressionInBiPhasicTPoints:biPhasicTPoints:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double avgDepressionInBiPhasicTPoints __attribute__((swift_name("avgDepressionInBiPhasicTPoints")));
@property (readonly) double avgDepressionInTPoints __attribute__((swift_name("avgDepressionInTPoints")));
@property (readonly) NSMutableArray<XFWDouble *> *biPhasicTPoints __attribute__((swift_name("biPhasicTPoints")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HRVKt")))
@interface XFWHRVKt : XFWBase
+ (double)roundTo:(double)receiver decimalPostfixDigit:(int32_t)decimalPostfixDigit __attribute__((swift_name("roundTo(_:decimalPostfixDigit:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol XFWKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<XFWKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<XFWKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol XFWKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<XFWKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<XFWKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol XFWKotlinx_serialization_coreKSerializer <XFWKotlinx_serialization_coreSerializationStrategy, XFWKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinDoubleArray")))
@interface XFWKotlinDoubleArray : XFWBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(XFWDouble *(^)(XFWInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (double)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (XFWKotlinDoubleIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(double)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntArray")))
@interface XFWKotlinIntArray : XFWBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(XFWInt *(^)(XFWInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int32_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (XFWKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int32_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface XFWKotlinThrowable : XFWBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(XFWKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(XFWKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (XFWKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) XFWKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface XFWKotlinException : XFWKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(XFWKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(XFWKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface XFWKotlinEnumCompanion : XFWBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XFWKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface XFWKotlinArray<T> : XFWBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(XFWInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<XFWKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol XFWKotlinx_serialization_coreEncoder
@required
- (id<XFWKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<XFWKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<XFWKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<XFWKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<XFWKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<XFWKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<XFWKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<XFWKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<XFWKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) XFWKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol XFWKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<XFWKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<XFWKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<XFWKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) XFWKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol XFWKotlinx_serialization_coreDecoder
@required
- (id<XFWKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<XFWKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<XFWKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<XFWKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<XFWKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (XFWKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<XFWKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<XFWKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) XFWKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol XFWKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("KotlinDoubleIterator")))
@interface XFWKotlinDoubleIterator : XFWBase <XFWKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (XFWDouble *)next __attribute__((swift_name("next()")));
- (double)nextDouble __attribute__((swift_name("nextDouble()")));
@end;

__attribute__((swift_name("KotlinIntIterator")))
@interface XFWKotlinIntIterator : XFWBase <XFWKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (XFWInt *)next __attribute__((swift_name("next()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol XFWKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<XFWKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<XFWKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<XFWKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<XFWKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<XFWKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<XFWKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<XFWKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<XFWKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<XFWKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<XFWKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<XFWKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<XFWKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<XFWKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<XFWKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<XFWKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<XFWKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<XFWKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) XFWKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface XFWKotlinx_serialization_coreSerializersModule : XFWBase
- (void)dumpToCollector:(id<XFWKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<XFWKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<XFWKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<XFWKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<XFWKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<XFWKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<XFWKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<XFWKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol XFWKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface XFWKotlinx_serialization_coreSerialKind : XFWBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol XFWKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<XFWKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<XFWKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<XFWKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<XFWKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<XFWKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<XFWKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<XFWKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<XFWKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<XFWKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<XFWKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<XFWKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<XFWKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<XFWKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<XFWKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<XFWKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<XFWKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<XFWKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<XFWKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) XFWKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface XFWKotlinNothing : XFWBase
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol XFWKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<XFWKotlinKClass>)kClass provider:(id<XFWKotlinx_serialization_coreKSerializer> (^)(NSArray<id<XFWKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<XFWKotlinKClass>)kClass serializer:(id<XFWKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<XFWKotlinKClass>)baseClass actualClass:(id<XFWKotlinKClass>)actualClass actualSerializer:(id<XFWKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<XFWKotlinKClass>)baseClass defaultDeserializerProvider:(id<XFWKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<XFWKotlinKClass>)baseClass defaultDeserializerProvider:(id<XFWKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<XFWKotlinKClass>)baseClass defaultSerializerProvider:(id<XFWKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol XFWKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol XFWKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol XFWKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol XFWKotlinKClass <XFWKotlinKDeclarationContainer, XFWKotlinKAnnotatedElement, XFWKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
