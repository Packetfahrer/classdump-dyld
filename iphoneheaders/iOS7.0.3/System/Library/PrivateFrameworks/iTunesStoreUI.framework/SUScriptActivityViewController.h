/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/SUScriptViewController.h>

@class NSArray, NSString;

@interface SUScriptActivityViewController : SUScriptViewController {

	NSArray* _applicationActivities;
	NSArray* _providers;

}

@property (copy) id excludedActivityTypes; 
@property (readonly) NSString * activityTypeAddToReadingList; 
@property (readonly) NSString * activityTypeAssignToContact; 
@property (readonly) NSString * activityTypeCopyToPasteboard; 
@property (readonly) NSString * activityTypeMail; 
@property (readonly) NSString * activityTypeMessage; 
@property (readonly) NSString * activityTypePostToFacebook; 
@property (readonly) NSString * activityTypePostToFlickr; 
@property (readonly) NSString * activityTypePostToTwitter; 
@property (readonly) NSString * activityTypePostToVimeo; 
@property (readonly) NSString * activityTypePostToWeibo; 
@property (readonly) NSString * activityTypePrint; 
@property (readonly) NSString * activityTypeSaveToCameraRoll; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(void)setExcludedActivityTypes:(id)arg1 ;
-(id)excludedActivityTypes;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)newNativeViewController;
-(void)setTitle:(id)arg1 forActivityType:(id)arg2 ;
-(id)initWithScriptItemProviders:(id)arg1 applicationActivities:(id)arg2 ;
-(id)activityTypeAddToReadingList;
-(id)activityTypeAssignToContact;
-(id)activityTypeCopyToPasteboard;
-(id)activityTypeMail;
-(id)activityTypeMessage;
-(id)activityTypePostToFacebook;
-(id)activityTypePostToFlickr;
-(id)activityTypePostToTwitter;
-(id)activityTypePostToVimeo;
-(id)activityTypePostToWeibo;
-(id)activityTypePrint;
-(id)activityTypeSaveToCameraRoll;
@end
