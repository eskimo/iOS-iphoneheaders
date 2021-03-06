/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:56 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WBSParsecSearchSessionDelegate;
#import <WebUI/WebUI-Structs.h>
@class WBSParsecSearchClient, NSURLSession, NSMutableArray, NSMutableDictionary, WBSParsecSearchResultCache, WBSCompletionQuery;

@interface WBSParsecSearchSession : NSObject {

	WBSParsecSearchClient* _client;
	NSURLSession* _urlSession;
	time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > _sessionStartTimestamp;
	NSMutableArray* _feedbackActions;
	time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > _latestQueryTimestamp;
	double _minimumIntervalBetweenQueriesFromResponseHeaders;
	NSMutableDictionary* _resultSetPrefixCache;
	WBSParsecSearchResultCache* _searchResultCache;
	BOOL _hasRespondedToCurrentQuery;
	BOOL _valid;
	id<WBSParsecSearchSessionDelegate> _delegate;
	WBSCompletionQuery* _currentQuery;
	double _uiScale;

}

@property (assign,nonatomic,__weak) id<WBSParsecSearchSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) WBSCompletionQuery * currentQuery;                               //@synthesize currentQuery=_currentQuery - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid;                                     //@synthesize valid=_valid - In the implementation block
@property (nonatomic,readonly) WBSParsecSearchClient * client;                                //@synthesize client=_client - In the implementation block
@property (assign,setter=setUIScale:,nonatomic) double uiScale;                               //@synthesize uiScale=_uiScale - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id<WBSParsecSearchSessionDelegate>)arg1 ;
-(id<WBSParsecSearchSessionDelegate>)delegate;
-(BOOL)isValid;
-(void)_invalidate;
-(void)_endSession;
-(id)initWithClient:(id)arg1 ;
-(WBSParsecSearchClient *)client;
-(double)uiScale;
-(void)_sendWarmupRequest;
-(id)_searchURLForQuery:(id)arg1 ;
-(id)_urlSession;
-(double)_timeToFirstByteForDataTask:(id)arg1 ;
-(void)_generateSearchFeedbackForResponse:(id)arg1 forQuery:(id)arg2 timeToFirstByte:(double)arg3 error:(id)arg4 ;
-(id)_searchFallbackURLForQuery:(id)arg1 ;
-(void)didDisplayCompletionListItems:(id)arg1 hidingParsecResult:(id)arg2 forQuery:(id)arg3 ;
-(unsigned long long)_addFeedbackAction:(id)arg1 ;
-(void)userDidSelectCompletionListItem:(id)arg1 hidingParsecResult:(id)arg2 ;
-(void)userDidCancelSession:(long long)arg1 ;
-(void)_addParsecAndSearchSuggestionDeltaForQuery:(id)arg1 toFeedbackDictionary:(id)arg2 ;
-(id)_searchURLForQuery:(id)arg1 baseURL:(id)arg2 ;
-(void)_respondToCurrentQueryIfNeededWithResults:(id)arg1 ;
-(id)_cachedResultSetForQuery:(id)arg1 ;
-(void)_generateCachedSearchFeedbackForQuery:(id)arg1 ;
-(void)_processBestResultSetOnMainThread:(id)arg1 forQuery:(id)arg2 ;
-(id)_searchRequestForQuery:(id)arg1 ;
-(BOOL)_canSendQuery;
-(void)_searchRequestFailedForQuery:(id)arg1 ;
-(void)_processSearchResponseOnMainThread:(id)arg1 forQuery:(id)arg2 timeToFirstByte:(double)arg3 ;
-(void)_sendGeneratedFeedback;
-(void)_cacheResultSet:(id)arg1 ;
-(void)_cacheResultsFromSearchResponse:(id)arg1 ;
-(void)didDisplayCompletionListItems:(id)arg1 forQuery:(id)arg2 ;
-(void)userDidSelectCompletionListItem:(id)arg1 ;
-(void)userDidCancelSession;
-(void)didReceiveWebSuggestionsForQuery:(id)arg1 fromSearchProvider:(id)arg2 ;
-(void)didReceiveLocalResultsForQuery:(id)arg1 ;
-(void)setCurrentQuery:(WBSCompletionQuery *)arg1 ;
-(WBSCompletionQuery *)currentQuery;
-(void)setUIScale:(double)arg1 ;
@end

