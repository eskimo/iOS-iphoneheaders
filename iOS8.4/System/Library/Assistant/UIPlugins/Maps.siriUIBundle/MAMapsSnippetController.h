/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:59 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Assistant/UIPlugins/Maps.siriUIBundle/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <Maps/MAListSnippetViewDelegate.h>
#import <Maps/MAMapSnippetViewDelegate.h>
#import <Maps/CLLocationManagerDelegate.h>

@protocol SiriUISnippetViewControllerDelegate;
@class CLLocationManager, SALocation, SALocalSearchMapItemSnippet, NSString;

@interface MAMapsSnippetController : SiriUISnippetViewController <MAListSnippetViewDelegate, MAMapSnippetViewDelegate, CLLocationManagerDelegate> {

	CLLocationManager* _locManager;
	BOOL _appearing;
	SALocation* _searchRegionCenter;
	double _fallbackDistance;
	BOOL _hasEverStartedLoading;
	id<SiriUISnippetViewControllerDelegate> _delegate;
	SALocalSearchMapItemSnippet* _snippet;

}

@property (nonatomic,retain) SALocalSearchMapItemSnippet * snippet;              //@synthesize snippet=_snippet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)listView:(id)arg1 didChooseMapItem:(id)arg2 ;
-(id)headerLocationForSearchCenter:(id)arg1 location:(SCD_Struct_MA0)arg2 forMapItem:(id)arg3 ;
-(void)updateTitleAndSubtitleWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)titleForList:(id)arg1 ;
-(void)mapViewDidChooseMapAttribution:(id)arg1 ;
-(id)nearCityString:(id)arg1 ;
-(void)mapView:(id)arg1 didChooseMapItem:(id)arg2 ;
-(double)desiredHeightForWidth:(double)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setSnippet:(SALocalSearchMapItemSnippet *)arg1 ;
-(SALocalSearchMapItemSnippet *)snippet;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(id)initWithSnippet:(id)arg1 ;
-(void)_cleanUp;
@end

