// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class SimLabsVR : ModuleRules
{
	public SimLabsVR(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "MediaAssets", "Media"});
		PublicDependencyModuleNames.Add("MediaAssets");

		PrivateDependencyModuleNames.AddRange(new string[] {  });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
		if (Target.Platform == UnrealTargetPlatform.Android)
        {
            string pluginPath = Utils.MakePathRelativeTo(ModuleDirectory, BuildConfiguration.RelativeEnginePath);
            AdditionalPropertiesForReceipt.Add(new ReceiptProperty("AndroidPlugin", (pluginPath + "/SimLabsVR_APL.xml")));

        }
	}
}
