/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:39 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/RoutePickingDisplayableRoutes.h>

@class MNRouteSet, DirectionsWaypoint, NSString;

@interface DirectionsManagerLoadingResult : NSObject <RoutePickingDisplayableRoutes> {

	MNRouteSet* _routeSet;
	DirectionsWaypoint* _startWaypoint;
	DirectionsWaypoint* _endWaypoint;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)currentRouteSet;
-(id)initWithRouteSet:(id)arg1 startWaypoint:(id)arg2 endWaypoint:(id)arg3 ;
-(id)startWaypoint;
-(id)endWaypoint;
@end

