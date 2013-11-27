/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Radio/RadioTrack.h>
#import <Radio/RadioManagedObjectWrapperProtocol.h>

@class NSURL, NSManagedObject, NSManagedObjectContext;

@interface RadioAudioClip : RadioTrack <RadioManagedObjectWrapperProtocol> {

	BOOL _isSkipable;

}

@property (nonatomic,copy) NSURL * assetURL; 
@property (assign,nonatomic) long long purchaseID; 
@property (nonatomic,readonly) BOOL isSkipable;                               //@synthesize isSkipable=_isSkipable - In the implementation block
@property (assign,nonatomic) BOOL isSkippable; 
@property (nonatomic,readonly) NSManagedObject * managedObject; 
@property (nonatomic,readonly) NSManagedObjectContext * context; 
-(long long)purchaseID;
-(BOOL)isSkipable;
-(id)assetURL;
-(void)setAssetURL:(id)arg1 ;
-(void)setPurchaseID:(long long)arg1 ;
-(void)setIsSkippable:(BOOL)arg1 ;
-(BOOL)isSkippable;
@end
