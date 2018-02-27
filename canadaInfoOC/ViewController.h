//
//  ViewController.h
//  canadaInfoOC
//
//  Created by Jigar Thakkar on 27/2/18.
//  Copyright © 2018 Jigar Thakkar. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol ViewControllerDeleagte;

@protocol ViewControllerDeleagte
@optional
- (void)connectionDidReceiveFailure:(NSString *)error;
- (void)connectionDidFinishLoading:(NSDictionary *)dictResponseInfo;
@end

@interface ViewController : NSObject
@property(strong, nonatomic) NSArray *arrFacts;
@property(assign, nonatomic) id<ViewControllerDeleagte> delegate;
- (void)fetchDataFromJSONFile;
@end




