/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSData;

@interface FairPlayDecryptSession : NSObject {

	NSData* _dpInfo;
	void* _decryptSession;

}
-(id)initWithDPInfo:(id)arg1 ;
-(id)decryptBytes:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end
