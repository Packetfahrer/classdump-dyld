/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/DirectionsManagerObserver.h>

@protocol StarkNavigationStartupDelegate;
@class DirectionsWaypoint, ;

@interface StarkNavigationStartupSession : NSObject <DirectionsManagerObserver> {

	BOOL _started;
	BOOL _ended;
	DirectionsWaypoint* _destination;
	<StarkNavigationStartupDelegate>* _delegate;

}

@property (assign,nonatomic) <StarkNavigationStartupDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sessionWithSearchResultDestination:(id)arg1 ;
+(id)sessionWithHistoryItemDestination:(id)arg1 ;
+(id)_runningSessions;
+(void)_addSessionToRunningSessions:(id)arg1 ;
+(void)_removeSessionFromRunningSessions:(id)arg1 ;
+(id)sessionWithAddressDestination:(id)arg1 ;
-(void)directionsManagerDidFailToLoad:(id)arg1 withError:(id)arg2 ;
-(void)directionsManagerDidStartLoad:(id)arg1 ;
-(void)directionsManager:(id)arg1 didLoadRoute:(id)arg2 ;
-(void)directionsManagerDidCancelLoad:(id)arg1 ;
-(id)initWithDestinationWaypoint:(id)arg1 ;
-(void)_endWithError:(id)arg1 ;
-(void)_presentErrorIfPossible:(id)arg1 ;
-(BOOL)_shouldPresentError:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)cancel;
-(void)start;
@end
