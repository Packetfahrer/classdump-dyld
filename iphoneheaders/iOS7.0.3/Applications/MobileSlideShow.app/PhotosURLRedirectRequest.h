/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSlideShow.app/MobileSlideShow
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIAlertViewDelegate.h>

@protocol PLRootLibraryNavigationController;
@class NSURL, UIAlertView, ;

@interface PhotosURLRedirectRequest : NSObject <UIAlertViewDelegate> {

	NSURL* _URL;
	UIAlertView* _alertView;
	<PLRootLibraryNavigationController>* _rootController;

}
-(id)initWithDestinationURL:(id)arg1 rootController:(id)arg2 ;
-(void)performRequest;
-(void)_showAlertForError:(int)arg1 ;
-(BOOL)_checkAndAlertSubscribedStreamsLimitReached;
-(void)_navigateToPhotoStreamTab;
-(void)dealloc;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
@end
