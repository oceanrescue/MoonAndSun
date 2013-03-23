//
//  VNViewController.m
//  MoonAndSun
//
//  Created by Valeriy Nikitin on 3/23/13.
//  Copyright (c) 2013 Valeriy Nikitin. All rights reserved.
//

#import "VNViewController.h"
#import "AstroSmall.h"

@interface VNViewController ()

@end

@implementation VNViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    double latitude = 36.673789;
    double longitude = 29.100895;
    NSDate *today = [NSDate date];
    NSDictionary *sunDataDict = [AstroSmall sunData:today forLocation:CLLocationCoordinate2DMake(latitude, longitude)];
    NSDictionary *moonDataDict = [AstroSmall moonData:today forLocation:CLLocationCoordinate2DMake(latitude, longitude)];

    
    self.textView.text = [NSString stringWithFormat:@"Sun and Moon data\nDate: %@\nLatitude: %.2f\nLongitude: %.2f\n\nSun:\n%@\n\nMoon:\n%@\n", today, latitude, longitude, [sunDataDict description], [moonDataDict description]];

}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
