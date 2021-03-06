/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PowerlogCore/PowerlogCore-Structs.h>
@class NSString, NSMutableDictionary;

@interface PLSQLiteConnection : NSObject {

	int _transactionInProgress;
	NSString* _filePath;
	sqlite3Ref _dbConnection;
	NSString* _dbLock;
	NSMutableDictionary* _preparedStatements;
	NSMutableDictionary* _preparedUpdateStatements;
	NSMutableDictionary* _preparedDynamicStatements;
	NSString* _transactionLock;
	NSString* _cachedClassName;

}

@property (readonly) NSObject*<OS_dispatch_queue> workQueue; 
@property (nonatomic,copy) NSString * filePath;                                  //@synthesize filePath=_filePath - In the implementation block
@property (assign) sqlite3Ref dbConnection;                                      //@synthesize dbConnection=_dbConnection - In the implementation block
@property (nonatomic,retain) NSString * dbLock;                                  //@synthesize dbLock=_dbLock - In the implementation block
@property (retain) NSMutableDictionary * preparedStatements;                     //@synthesize preparedStatements=_preparedStatements - In the implementation block
@property (retain) NSMutableDictionary * preparedUpdateStatements;               //@synthesize preparedUpdateStatements=_preparedUpdateStatements - In the implementation block
@property (retain) NSMutableDictionary * preparedDynamicStatements;              //@synthesize preparedDynamicStatements=_preparedDynamicStatements - In the implementation block
@property (assign) int transactionInProgress;                                    //@synthesize transactionInProgress=_transactionInProgress - In the implementation block
@property (retain) NSString * transactionLock;                                   //@synthesize transactionLock=_transactionLock - In the implementation block
@property (retain) NSString * cachedClassName;                                   //@synthesize cachedClassName=_cachedClassName - In the implementation block
+(void)removeDBAtFilePath:(id)arg1 ;
+(id)masterTableForTable:(id)arg1 andType:(id)arg2 ;
+(id)versionForTable:(id)arg1 ;
+(id)sharedSQLiteConnection;
-(void)dealloc;
-(id)init;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
-(void)beginTransaction;
-(void)endTransaction;
-(void)closeConnection;
-(id)initWithFilePath:(id)arg1 ;
-(id)mergeDataFromOtherDBFile:(id)arg1 ;
-(BOOL)tableExistsForTableName:(id)arg1 ;
-(void)createTableName:(id)arg1 withColumns:(id)arg2 ;
-(void)setSchemaVersion:(double)arg1 forTableName:(id)arg2 ;
-(void)removeIDIndexes;
-(void)checkPointDB;
-(void)removeEmptyOldTables;
-(double)schemaVersionForTable:(id)arg1 ;
-(id)tableInfo:(id)arg1 ;
-(void)createIndexOnTable:(id)arg1 forColumn:(id)arg2 ;
-(void)createCoveringIndexOnTable:(id)arg1 forColumns:(id)arg2 ;
-(id)writeEntries:(id)arg1 ;
-(long long)writeEntry:(id)arg1 ;
-(void)writeAggregateEntry:(id)arg1 ;
-(void)setAllNullValuesForEntryKey:(id)arg1 forKey:(id)arg2 toValue:(id)arg3 withFilters:(id)arg4 ;
-(void)loadArrayValuesIntoEntry:(id)arg1 ;
-(void)deleteEntryForKey:(id)arg1 withRowID:(long long)arg2 ;
-(void)deleteAllEntriesForKey:(id)arg1 withFilters:(id)arg2 ;
-(BOOL)copyDatabaseToPath:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 withTableFilters:(id)arg4 vacuumDB:(BOOL)arg5 ;
-(void)trimAllTablesFromDate:(id)arg1 toDate:(id)arg2 withTableFilters:(id)arg3 ;
-(void)vacuum;
-(void)dropTables:(id)arg1 ;
-(void)hashEntryKeyKeys:(id)arg1 ;
-(BOOL)openCurrentFile;
-(BOOL)passesIntegrityCheck;
-(void)setJournalMode:(short)arg1 ;
-(NSString *)dbLock;
-(id)sqlFormatedColumnNamesForTable:(id)arg1 withQuoteChar:(char)arg2 ;
-(int)rowCountForTable:(id)arg1 ;
-(id)sqlFormatedColumnNamesForTableInsert:(id)arg1 ;
-(id)sqlFormatedColumnNamesForTableSelect:(id)arg1 ;
-(void)removeTableNameFromMergeDB:(id)arg1 ;
-(void)enumerateAllTablesWithBlock:(/*^block*/id)arg1 ;
-(void)trimTable:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 withFilter:(id)arg4 ;
-(sqlite3Ref)dbConnection;
-(id)performStatement:(id)arg1 ;
-(BOOL)tableHasTimestampColumn:(id)arg1 ;
-(void)runTrimQuery:(id)arg1 ;
-(void)dropTable:(id)arg1 ;
-(NSString *)cachedClassName;
-(int)transactionInProgress;
-(NSString *)transactionLock;
-(BOOL)isTransactionInProgress;
-(void)setTransactionInProgress:(int)arg1 ;
-(NSMutableDictionary *)preparedStatements;
-(void)buildColumnInsert:(id*)arg1 andValueInsert:(id*)arg2 forEntry:(id)arg3 ;
-(void)displaySchema:(id)arg1 ;
-(int)bindEntry:(id)arg1 toPreparedStatement:(id)arg2 atBindPosition:(int)arg3 ;
-(void)writeDynamicEntries:(id)arg1 ;
-(void)writeArrayEntries:(id)arg1 ;
-(NSMutableDictionary *)preparedDynamicStatements;
-(NSMutableDictionary *)preparedUpdateStatements;
-(void)deleteArrayEntriesForKey:(id)arg1 withRowID:(long long)arg2 ;
-(void)deleteDynamicEntriesForKey:(id)arg1 withRowID:(long long)arg2 ;
-(void)setDbConnection:(sqlite3Ref)arg1 ;
-(BOOL)copyDatabaseToPath:(id)arg1 ;
-(void)printDBStatusString;
-(void)lockDatabaseWithBlock:(/*^block*/id)arg1 ;
-(void)trimAllTablesFromDate:(id)arg1 toDate:(id)arg2 ;
-(BOOL)copyDatabaseToPath:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 ;
-(void)setDbLock:(NSString *)arg1 ;
-(void)setPreparedStatements:(NSMutableDictionary *)arg1 ;
-(void)setPreparedUpdateStatements:(NSMutableDictionary *)arg1 ;
-(void)setPreparedDynamicStatements:(NSMutableDictionary *)arg1 ;
-(void)setTransactionLock:(NSString *)arg1 ;
-(void)setCachedClassName:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)entriesForKey:(id)arg1 withProperties:(id)arg2 ;
-(void)updateEntry:(id)arg1 ;
-(id)lookupValueForEntryKey:(id)arg1 forKey:(id)arg2 forNumberValue:(long long)arg3 ;
-(void)setLookupValueForEntryKey:(id)arg1 forKey:(id)arg2 forNumberValue:(long long)arg3 withStringValue:(id)arg4 ;
-(id)performQuery:(id)arg1 ;
-(void)loadDynamicValuesIntoEntry:(id)arg1 ;
-(void)loadLookupTableValuesIntoEntry:(id)arg1 ;
-(void)releaseMemory;
@end

