/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIAlertView.h>

@interface VideosRentalAlertView : UIAlertView {

	int _alertReason;

}

@property (assign,nonatomic) int alertReason;              //@synthesize alertReason=_alertReason - In the implementation block
+(id)alertViewForRental:(id)arg1 ;
+(id)_willExpireSoonAlert;
+(id)_initialPlaybackAlertWithTimeRemaining:(double)arg1 ;
+(id)_generalErrorAlert;
-(int)alertReason;
-(void)setAlertReason:(int)arg1 ;
@end
