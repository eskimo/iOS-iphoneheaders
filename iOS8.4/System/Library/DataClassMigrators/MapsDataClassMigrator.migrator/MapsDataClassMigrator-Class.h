/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:54 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsDataClassMigrator/MapsDataClassMigrator-Structs.h>
#import <DataMigration/DataClassMigrator.h>

@class PersistenceManager;

@interface MapsDataClassMigrator : DataClassMigrator {

	CFStringRef _mapsDefaultsDomainInContainer;
	PersistenceManager* _persistenceManager;

}
-(BOOL)_migrateFiles;
-(BOOL)_migratePathsIntoContainer;
-(BOOL)_migrateDirections;
-(BOOL)_migrateBookmarks:(void*)arg1 ;
-(BOOL)_migrateSearchResults:(void*)arg1 ;
-(BOOL)_migrateHistory:(void*)arg1 ;
-(BOOL)_migrateDefaults;
-(BOOL)_moveItemAtPathIfExists:(id)arg1 toPathCreatingIntermediateDirectories:(id)arg2 ;
-(id)_persistenceManager;
-(id)_oldDirectionsFilePath;
-(void)_deleteOldDirections;
-(BOOL)_migratePreTellurideDirections;
-(BOOL)_migratePreSundanceDirections;
-(void)_changeSearchResultTypesToInnsbruckTypesIfNeeded:(id)arg1 ;
-(BOOL)_migrateDictionaryBookmarks:(void*)arg1 ;
-(BOOL)_migrateToTellurideFCSBookmarks;
-(BOOL)_migrateToInnsbruckBookmarks;
-(BOOL)_migrateToOkemoBookmarks;
-(CFStringRef)_mapsDefaultsDomainInContainer;
-(BOOL)_migratePreProtoBufferSearchResults:(void*)arg1 ;
-(BOOL)_migrateToTellurideFCSSearchResults;
-(id)_oldHistoryFilePath;
-(void)_deleteOldHistory;
-(BOOL)_migratePreSundanceHistoryWithAddressBook:(void*)arg1 ;
-(BOOL)_migratePreInnsbruckHistory;
-(BOOL)_migratePreOkemoHistory;
-(BOOL)_migrateAllDefaultsToOkemoContainer;
-(BOOL)_migrateOrphanedNetworkDefaults;
-(BOOL)_migrateOkemoDefaults;
-(id)dataClassName;
-(void)dealloc;
-(BOOL)performMigration;
@end

