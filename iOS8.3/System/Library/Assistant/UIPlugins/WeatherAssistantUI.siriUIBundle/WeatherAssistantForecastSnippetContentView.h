/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:12:45 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/UIPlugins/WeatherAssistantUI.siriUIBundle/WeatherAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WeatherAssistantUI/WeatherAssistantUI-Structs.h>
#import <Weather/WeatherView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UITapGestureRecognizer, WeatherAssistantForecastSnippetController, UIButton, NSDateComponents, NSCalendar, NSDateFormatter, NSMutableArray, NSString;

@interface WeatherAssistantForecastSnippetContentView : WeatherView <UIGestureRecognizerDelegate> {

	char _showingHourly;
	UITapGestureRecognizer* _tapGestureRecognizer;
	char _showCurrentForecastHeader;
	char _userWantsCelsius;
	WeatherAssistantForecastSnippetController* _weatherSnippetDelegate;
	UIButton* _providerButton;
	NSDateComponents* _components;
	NSCalendar* _calendar;
	NSDateFormatter* _formatter;
	UIButton* _dataProviderButton;
	NSMutableArray* _forecastViews;

}

@property (assign,nonatomic) WeatherAssistantForecastSnippetController * weatherSnippetDelegate;              //@synthesize weatherSnippetDelegate=_weatherSnippetDelegate - In the implementation block
@property (assign,nonatomic) char showingHourly;                                                              //@synthesize showingHourly=_showingHourly - In the implementation block
@property (assign,nonatomic) char showCurrentForecastHeader;                                                  //@synthesize showCurrentForecastHeader=_showCurrentForecastHeader - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                                   //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIButton * providerButton;                                                       //@synthesize providerButton=_providerButton - In the implementation block
@property (nonatomic,retain) NSDateComponents * components;                                                   //@synthesize components=_components - In the implementation block
@property (nonatomic,retain) NSCalendar * calendar;                                                           //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) NSDateFormatter * formatter;                                                     //@synthesize formatter=_formatter - In the implementation block
@property (assign,nonatomic) char userWantsCelsius;                                                           //@synthesize userWantsCelsius=_userWantsCelsius - In the implementation block
@property (nonatomic,readonly) UIButton * dataProviderButton;                                                 //@synthesize dataProviderButton=_dataProviderButton - In the implementation block
@property (assign,nonatomic) NSMutableArray * forecastViews;                                                  //@synthesize forecastViews=_forecastViews - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)heightForProposedForecastCount:(unsigned)arg1 showHourlyForecast:(char)arg2 showForecastHeader:(char)arg3 compactWidth:(char)arg4 ;
+(id)tintedProviderButton;
-(void)setupWeather;
-(id)initWithFrame:(CGRect)arg1 showForecastHeader:(char)arg2 ;
-(void)setWeatherSnippetDelegate:(WeatherAssistantForecastSnippetController *)arg1 ;
-(void)setShowingHourly:(char)arg1 ;
-(void)openExtendedForecast:(id)arg1 ;
-(id)newForecastViewForIndex:(int)arg1 ;
-(id)condensedHourInRegionFormat:(int)arg1 ;
-(NSMutableArray *)forecastViews;
-(UIButton *)providerButton;
-(WeatherAssistantForecastSnippetController *)weatherSnippetDelegate;
-(char)showCurrentForecastHeader;
-(void)setShowCurrentForecastHeader:(char)arg1 ;
-(void)setProviderButton:(UIButton *)arg1 ;
-(char)showingHourly;
-(char)userWantsCelsius;
-(void)setUserWantsCelsius:(char)arg1 ;
-(UIButton *)dataProviderButton;
-(void)setForecastViews:(NSMutableArray *)arg1 ;
-(NSDateFormatter *)formatter;
-(void)setFormatter:(NSDateFormatter *)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSCalendar *)calendar;
-(NSDateComponents *)components;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setComponents:(NSDateComponents *)arg1 ;
-(void)cityDidStartWeatherUpdate:(id)arg1 ;
-(void)resetLocale:(id)arg1 ;
-(char)updateWeatherDisplayForCity:(id)arg1 ;
-(void)refreshLocalization;
@end

