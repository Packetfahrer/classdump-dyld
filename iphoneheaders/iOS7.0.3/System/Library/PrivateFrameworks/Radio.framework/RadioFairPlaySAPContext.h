/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <Radio/Radio-Structs.h>
@interface RadioFairPlaySAPContext : NSObject {

	FPSAPContextOpaque_Ref _session;

}
-(void)dealloc;
-(id)_initWithFPSAPContext:(void*)arg1 ;
-(BOOL)verifyData:(id)arg1 withSignature:(id)arg2 error:(id*)arg3 ;
-(id)signatureWithData:(id)arg1 error:(id*)arg2 ;
@end
