/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:38:06 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppSupport/AppSupport-Structs.h>
@class CPSearchMatcher;

@interface ALCityManager : NSObject {

	sqlite3Ref _db;
	sqlite3Ref _localizedDb;
	CPSearchMatcher* _citySearchMatcher;

}

@property (readonly) CPSearchMatcher * citySearchMatcher;              //@synthesize citySearchMatcher=_citySearchMatcher - In the implementation block
+(id)newCitiesByIdentifierMap:(id)arg1 ;
+(id)_localeDictionaryFromSQLRow:(char**)arg1 ;
+(CFArrayRef)legacyCityForCity:(id)arg1 ;
+(id)sharedManager;
-(id)citiesMatchingName:(id)arg1 ;
-(id)allCities;
-(id)defaultCityForTimeZone:(id)arg1 ;
-(id)localeWithCode:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)citiesMatchingQualifier:(id)arg1 ;
-(void)localizeCities:(id)arg1 ;
-(id)citiesWithIdentifiers:(id)arg1 ;
-(id)defaultCitiesForLocaleCode:(id)arg1 options:(int)arg2 ;
-(id)_defaultCityForTimeZone:(id)arg1 localeCode:(id)arg2 ;
-(id)_cityForTimeZone:(id)arg1 localeCode:(id)arg2 ;
-(id)allLocales;
-(id)defaultCitiesShownInWorldClock;
-(id)defaultCityForTimeZone:(id)arg1 localeCode:(id)arg2 ;
-(CPSearchMatcher *)citySearchMatcher;
-(id)citiesWithTimeZone:(id)arg1 ;
-(id)citiesMatchingName:(id)arg1 localized:(char)arg2 ;
-(id)cityForClassicIdentifier:(id)arg1 ;
-(id)bestCityForLegacyCity:(CFArrayRef)arg1 ;
-(id)defaultCitiesForLocaleCode:(id)arg1 ;
@end

