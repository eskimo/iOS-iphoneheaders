/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:19 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/NSCopying.h>

@class NSString, NSDictionary, NSArray;

@interface PLPhotoEditModel : NSObject <NSCopying> {

	NSString* _effectFilterName;
	long long _effectFilterVersion;
	BOOL _smartToneEnabled;
	double _smartToneLevel;
	double _autoSmartToneLevel;
	NSString* _autoSmartToneIdentifier;
	double _brightnessLevelOffset;
	double _contrastLevelOffset;
	double _exposureLevelOffset;
	double _shadowsLevelOffset;
	double _blackPointLevelOffset;
	double _highlightsLevelOffset;
	BOOL _smartColorEnabled;
	double _autoSmartColorLevel;
	NSString* _autoSmartColorIdentifier;
	double _smartColorLevel;
	double _colorContrastLevelOffset;
	double _colorVibrancyLevelOffset;
	double _colorCastLevelOffset;
	BOOL _smartBWEnabled;
	double _smartBWLevel;
	double _bwStrengthLevelOffset;
	double _bwNeutralGammaLevelOffset;
	double _bwToneLevelOffset;
	double _bwHueLevelOffset;
	double _bwGrainLevelOffset;
	BOOL _whiteBalanceEnabled;
	double _whiteBalanceFaceI;
	double _whiteBalanceFaceQ;
	double _whiteBalanceFaceStrength;
	double _whiteBalanceFaceWarmth;
	double _straightenAngle;
	CGRect _normalizedCropRect;
	long long _cropConstraintWidth;
	long long _cropConstraintHeight;
	unsigned long long _rotation;
	NSDictionary* _smartToneStatistics;
	NSDictionary* _smartColorStatistics;
	NSDictionary* _smartBWStatistics;
	NSDictionary* _autoWhiteBalanceSettings;
	NSString* _autoWhiteBalanceIdentifier;
	NSArray* _redEyeCorrections;
	NSArray* _autoRedEyeCorrections;
	NSArray* _legacyAutoEnhanceFilters;
	BOOL _legacyAutoEnhanceIsOn;

}

@property (nonatomic,copy,readonly) NSString * effectFilterName;                                   //@synthesize effectFilterName=_effectFilterName - In the implementation block
@property (nonatomic,readonly) long long effectFilterVersion;                                      //@synthesize effectFilterVersion=_effectFilterVersion - In the implementation block
@property (getter=isSmartToneEnabled,nonatomic,readonly) BOOL smartToneEnabled;                    //@synthesize smartToneEnabled=_smartToneEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * smartToneStatistics;                            //@synthesize smartToneStatistics=_smartToneStatistics - In the implementation block
@property (nonatomic,readonly) double autoSmartToneLevel;                                          //@synthesize autoSmartToneLevel=_autoSmartToneLevel - In the implementation block
@property (nonatomic,copy,readonly) NSString * autoSmartToneIdentifier;                            //@synthesize autoSmartToneIdentifier=_autoSmartToneIdentifier - In the implementation block
@property (nonatomic,readonly) double smartToneLevel;                                              //@synthesize smartToneLevel=_smartToneLevel - In the implementation block
@property (nonatomic,readonly) double brightnessLevelOffset;                                       //@synthesize brightnessLevelOffset=_brightnessLevelOffset - In the implementation block
@property (nonatomic,readonly) double contrastLevelOffset;                                         //@synthesize contrastLevelOffset=_contrastLevelOffset - In the implementation block
@property (nonatomic,readonly) double exposureLevelOffset;                                         //@synthesize exposureLevelOffset=_exposureLevelOffset - In the implementation block
@property (nonatomic,readonly) double highlightsLevelOffset;                                       //@synthesize highlightsLevelOffset=_highlightsLevelOffset - In the implementation block
@property (nonatomic,readonly) double shadowsLevelOffset;                                          //@synthesize shadowsLevelOffset=_shadowsLevelOffset - In the implementation block
@property (nonatomic,readonly) double blackPointLevelOffset;                                       //@synthesize blackPointLevelOffset=_blackPointLevelOffset - In the implementation block
@property (getter=isSmartColorEnabled,nonatomic,readonly) BOOL smartColorEnabled;                  //@synthesize smartColorEnabled=_smartColorEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * smartColorStatistics;                           //@synthesize smartColorStatistics=_smartColorStatistics - In the implementation block
@property (nonatomic,readonly) double autoSmartColorLevel;                                         //@synthesize autoSmartColorLevel=_autoSmartColorLevel - In the implementation block
@property (nonatomic,copy,readonly) NSString * autoSmartColorIdentifier;                           //@synthesize autoSmartColorIdentifier=_autoSmartColorIdentifier - In the implementation block
@property (nonatomic,readonly) double smartColorLevel;                                             //@synthesize smartColorLevel=_smartColorLevel - In the implementation block
@property (nonatomic,readonly) double colorContrastLevelOffset;                                    //@synthesize colorContrastLevelOffset=_colorContrastLevelOffset - In the implementation block
@property (nonatomic,readonly) double colorVibrancyLevelOffset;                                    //@synthesize colorVibrancyLevelOffset=_colorVibrancyLevelOffset - In the implementation block
@property (nonatomic,readonly) double colorCastLevelOffset;                                        //@synthesize colorCastLevelOffset=_colorCastLevelOffset - In the implementation block
@property (getter=isSmartBWEnabled,nonatomic,readonly) BOOL smartBWEnabled;                        //@synthesize smartBWEnabled=_smartBWEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * smartBWStatistics;                              //@synthesize smartBWStatistics=_smartBWStatistics - In the implementation block
@property (nonatomic,readonly) double smartBWLevel;                                                //@synthesize smartBWLevel=_smartBWLevel - In the implementation block
@property (nonatomic,readonly) double bwStrengthLevelOffset;                                       //@synthesize bwStrengthLevelOffset=_bwStrengthLevelOffset - In the implementation block
@property (nonatomic,readonly) double bwNeutralGammaLevelOffset;                                   //@synthesize bwNeutralGammaLevelOffset=_bwNeutralGammaLevelOffset - In the implementation block
@property (nonatomic,readonly) double bwToneLevelOffset;                                           //@synthesize bwToneLevelOffset=_bwToneLevelOffset - In the implementation block
@property (nonatomic,readonly) double bwHueLevelOffset;                                            //@synthesize bwHueLevelOffset=_bwHueLevelOffset - In the implementation block
@property (nonatomic,readonly) double bwGrainLevelOffset;                                          //@synthesize bwGrainLevelOffset=_bwGrainLevelOffset - In the implementation block
@property (getter=isWhiteBalanceEnabled,nonatomic,readonly) BOOL whiteBalanceEnabled;              //@synthesize whiteBalanceEnabled=_whiteBalanceEnabled - In the implementation block
@property (nonatomic,readonly) double whiteBalanceFaceI;                                           //@synthesize whiteBalanceFaceI=_whiteBalanceFaceI - In the implementation block
@property (nonatomic,readonly) double whiteBalanceFaceQ;                                           //@synthesize whiteBalanceFaceQ=_whiteBalanceFaceQ - In the implementation block
@property (nonatomic,readonly) double whiteBalanceFaceStrength;                                    //@synthesize whiteBalanceFaceStrength=_whiteBalanceFaceStrength - In the implementation block
@property (nonatomic,readonly) double whiteBalanceFaceWarmth;                                      //@synthesize whiteBalanceFaceWarmth=_whiteBalanceFaceWarmth - In the implementation block
@property (nonatomic,readonly) unsigned long long rotation;                                        //@synthesize rotation=_rotation - In the implementation block
@property (nonatomic,readonly) CGRect normalizedCropRect;                                          //@synthesize normalizedCropRect=_normalizedCropRect - In the implementation block
@property (nonatomic,readonly) long long cropConstraintWidth;                                      //@synthesize cropConstraintWidth=_cropConstraintWidth - In the implementation block
@property (nonatomic,readonly) long long cropConstraintHeight;                                     //@synthesize cropConstraintHeight=_cropConstraintHeight - In the implementation block
@property (nonatomic,readonly) double straightenAngle;                                             //@synthesize straightenAngle=_straightenAngle - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentityCrop; 
@property (nonatomic,copy,readonly) NSDictionary * autoWhiteBalanceSettings;                       //@synthesize autoWhiteBalanceSettings=_autoWhiteBalanceSettings - In the implementation block
@property (nonatomic,copy,readonly) NSString * autoWhiteBalanceIdentifier;                         //@synthesize autoWhiteBalanceIdentifier=_autoWhiteBalanceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * redEyeCorrections;                                   //@synthesize redEyeCorrections=_redEyeCorrections - In the implementation block
@property (nonatomic,copy,readonly) NSArray * autoRedEyeCorrections;                               //@synthesize autoRedEyeCorrections=_autoRedEyeCorrections - In the implementation block
@property (nonatomic,copy,readonly) NSArray * legacyAutoEnhanceFilters;                            //@synthesize legacyAutoEnhanceFilters=_legacyAutoEnhanceFilters - In the implementation block
@property (nonatomic,readonly) BOOL legacyAutoEnhanceIsOn;                                         //@synthesize legacyAutoEnhanceIsOn=_legacyAutoEnhanceIsOn - In the implementation block
+(double)referenceStraightenAngleOfType:(long long)arg1 ;
+(unsigned long long)identityRotation;
+(CGRect)identityNormalizedCropRect;
+(double)angleForRotation:(unsigned long long)arg1 ;
+(double)referenceBrightnessLevelOfType:(long long)arg1 ;
+(double)referenceContrastLevelOfType:(long long)arg1 ;
+(double)referenceExposureLevelOfType:(long long)arg1 ;
+(double)referenceHighlightsLevelOfType:(long long)arg1 ;
+(double)referenceShadowsLevelOfType:(long long)arg1 ;
+(double)referenceBlackPointLevelOfType:(long long)arg1 ;
+(double)referenceColorContrastLevelOfType:(long long)arg1 ;
+(double)referenceColorVibrancyLevelOfType:(long long)arg1 ;
+(double)referenceColorCastLevelOfType:(long long)arg1 ;
+(double)referenceBWStrengthLevelOfType:(long long)arg1 ;
+(double)referenceBWNeutralGammaLevelOfType:(long long)arg1 ;
+(double)referenceBWToneLevelOfType:(long long)arg1 ;
+(double)referenceBWHueLevelOfType:(long long)arg1 ;
+(double)referenceBWGrainLevelOfType:(long long)arg1 ;
+(double)referenceSmartToneLevelOfType:(long long)arg1 ;
+(double)referenceSmartColorLevelOfType:(long long)arg1 ;
+(double)referenceSmartBWLevelOfType:(long long)arg1 ;
+(double)referenceWhiteBalanceFaceILevelOfType:(long long)arg1 ;
+(double)referenceWhiteBalanceFaceQLevelOfType:(long long)arg1 ;
+(double)referenceWhiteBalanceFaceStrengthLevelOfType:(long long)arg1 ;
+(double)referenceWhiteBalanceFaceWarmthLevelOfType:(long long)arg1 ;
+(long long)identityCropConstraint;
+(id)_identityModel;
+(void)_loadReferenceLevelsFromCIFilterWithName:(id)arg1 attributeKeys:(id)arg2 intoLevelStructs:(/*function pointer*/void**)arg3 ;
+(void)_loadSubfilterReferenceLevelsIfNeeded;
+(double)_referenceValueOfType:(long long)arg1 fromLevels:(SCD_Struct_PL20)arg2 ;
+(int)identityOrientation;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)mutableCopy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)rotation;
-(BOOL)isEqualToPhotoEditModel:(id)arg1 ;
-(NSArray *)redEyeCorrections;
-(NSArray *)autoRedEyeCorrections;
-(BOOL)legacyAutoEnhanceIsOn;
-(NSArray *)legacyAutoEnhanceFilters;
-(BOOL)isSmartToneEnabled;
-(double)brightnessLevelOffset;
-(double)contrastLevelOffset;
-(double)exposureLevelOffset;
-(double)highlightsLevelOffset;
-(double)shadowsLevelOffset;
-(double)blackPointLevelOffset;
-(BOOL)isSmartColorEnabled;
-(double)colorContrastLevelOffset;
-(double)colorVibrancyLevelOffset;
-(double)colorCastLevelOffset;
-(BOOL)isSmartBWEnabled;
-(double)bwStrengthLevelOffset;
-(double)bwNeutralGammaLevelOffset;
-(double)bwToneLevelOffset;
-(double)bwHueLevelOffset;
-(double)bwGrainLevelOffset;
-(BOOL)isWhiteBalanceEnabled;
-(double)whiteBalanceFaceI;
-(double)whiteBalanceFaceQ;
-(double)whiteBalanceFaceStrength;
-(double)whiteBalanceFaceWarmth;
-(NSString *)effectFilterName;
-(long long)effectFilterVersion;
-(double)straightenAngle;
-(CGRect)normalizedCropRect;
-(BOOL)isGeometryIdentity;
-(double)smartToneLevel;
-(NSDictionary *)smartToneStatistics;
-(double)smartColorLevel;
-(NSDictionary *)smartColorStatistics;
-(double)smartBWLevel;
-(NSDictionary *)smartBWStatistics;
-(void)_copyValuesFromModel:(id)arg1 interpolationStartModel:(id)arg2 progress:(double)arg3 ;
-(double)autoSmartToneLevel;
-(double)autoSmartColorLevel;
-(long long)cropConstraintWidth;
-(long long)cropConstraintHeight;
-(NSString *)autoSmartToneIdentifier;
-(NSString *)autoSmartColorIdentifier;
-(NSDictionary *)autoWhiteBalanceSettings;
-(NSString *)autoWhiteBalanceIdentifier;
-(BOOL)isVisuallyEqualToPhotoEditModel:(id)arg1 ;
-(BOOL)isGeometryEqualToPhotoEditModel:(id)arg1 ;
-(id)_debugDictionaryRepresentation;
-(BOOL)isIdentityModel;
-(BOOL)hasIdentityCrop;
@end

