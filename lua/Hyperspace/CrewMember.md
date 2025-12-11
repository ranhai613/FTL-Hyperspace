---
layout: lua
title: CrewMember
lang: en
---

# Class "CrewMember"


## Constructors
{: #Constructors .section}
### CrewMember ()
{: #CrewMember aria-label='Constructors' }
#### [CrewMember](../Hyperspace/CrewMember) CrewMember ()
{: aria-label='Constructors' }

___
### CrewMember ()
{: #CrewMember aria-label='Constructors' }
#### [CrewMember](../Hyperspace/CrewMember) CrewMember ([CrewBlueprint](../Hyperspace/CrewBlueprint) bp, integer shipId, boolean enemy, [CrewAnimation](../Hyperspace/CrewAnimation) animation)
{: aria-label='Constructors' }

___



## Static Methods
{: #Static-Methods .section}
### GetSkillFromSystem ()
{: #GetSkillFromSystem aria-label='StaticMethods' }
#### integer .GetSkillFromSystem (integer systemId)
{: aria-label='StaticMethods' }

___


## Methods
{: #Methods .section}
### ActivatePower ()
{: #ActivatePower aria-label='Methods' }
#### void :ActivatePower ()
{: aria-label='Methods' }

___
### ApplyDamage ()
{: #ApplyDamage aria-label='Methods' }
#### boolean :ApplyDamage (number damage)
{: aria-label='Methods' }

___
### AtFinalGoal ()
{: #AtFinalGoal aria-label='Methods' }
#### boolean :AtFinalGoal ()
{: aria-label='Methods' }

___
### AtGoal ()
{: #AtGoal aria-label='Methods' }
#### boolean :AtGoal ()
{: aria-label='Methods' }

___
### BadAtCombat ()
{: #BadAtCombat aria-label='Methods' }
#### boolean :BadAtCombat ()
{: aria-label='Methods' }

___
### BlockRoom ()
{: #BlockRoom aria-label='Methods' }
#### integer :BlockRoom ()
{: aria-label='Methods' }

___
### CanBurn ()
{: #CanBurn aria-label='Methods' }
#### boolean :CanBurn ()
{: aria-label='Methods' }

___
### CanFight ()
{: #CanFight aria-label='Methods' }
#### boolean :CanFight ()
{: aria-label='Methods' }

___
### CanHeal ()
{: #CanHeal aria-label='Methods' }
#### boolean :CanHeal ()
{: aria-label='Methods' }

___
### CanMan ()
{: #CanMan aria-label='Methods' }
#### boolean :CanMan ()
{: aria-label='Methods' }

___
### CanRepair ()
{: #CanRepair aria-label='Methods' }
#### boolean :CanRepair ()
{: aria-label='Methods' }

___
### CanSabotage ()
{: #CanSabotage aria-label='Methods' }
#### boolean :CanSabotage ()
{: aria-label='Methods' }

___
### CanStim ()
{: #CanStim aria-label='Methods' }
#### boolean :CanStim ()
{: aria-label='Methods' }

___
### CanSuffocate ()
{: #CanSuffocate aria-label='Methods' }
#### boolean :CanSuffocate ()
{: aria-label='Methods' }

___
### CanTeleport ()
{: #CanTeleport aria-label='Methods' }
#### boolean :CanTeleport ()
{: aria-label='Methods' }

___
### CheckFighting ()
{: #CheckFighting aria-label='Methods' }
#### void :CheckFighting ()
{: aria-label='Methods' }

___
### CheckForTeleport ()
{: #CheckForTeleport aria-label='Methods' }
#### void :CheckForTeleport ()
{: aria-label='Methods' }

___
### CheckRoomPath ()
{: #CheckRoomPath aria-label='Methods' }
#### boolean :CheckRoomPath (integer roomId)
{: aria-label='Methods' }

___
### CheckSkills ()
{: #CheckSkills aria-label='Methods' }
#### void :CheckSkills ()
{: aria-label='Methods' }

___
### Cleanup ()
{: #Cleanup aria-label='Methods' }
#### void :Cleanup ()
{: aria-label='Methods' }

___
### ClearPath ()
{: #ClearPath aria-label='Methods' }
#### void :ClearPath ()
{: aria-label='Methods' }

___
### ClearPosition ()
{: #ClearPosition aria-label='Methods' }
#### void :ClearPosition ()
{: aria-label='Methods' }

___
### ClearTask ()
{: #ClearTask aria-label='Methods' }
#### void :ClearTask ()
{: aria-label='Methods' }

___
### Clone ()
{: #Clone aria-label='Methods' }
#### void :Clone ()
{: aria-label='Methods' }

___
### CloseDoorBehind ()
{: #CloseDoorBehind aria-label='Methods' }
#### void :CloseDoorBehind ([Door](../Hyperspace/Door) door)
{: aria-label='Methods' }

___
### ContainsPoint ()
{: #ContainsPoint aria-label='Methods' }
#### boolean :ContainsPoint (integer x, integer y)
{: aria-label='Methods' }

___
### CountForVictory ()
{: #CountForVictory aria-label='Methods' }
#### boolean :CountForVictory ()
{: aria-label='Methods' }

___
### CycleColorLayer ()
{: #CycleColorLayer aria-label='Methods' }
#### void :CycleColorLayer (integer unk)
{: aria-label='Methods' }

___
### DirectModifyHealth ()
{: #DirectModifyHealth aria-label='Methods' }
#### boolean :DirectModifyHealth (number health)
{: aria-label='Methods' }

___
### EmptySlot ()
{: #EmptySlot aria-label='Methods' }
#### void :EmptySlot ()
{: aria-label='Methods' }

___
### ExactTarget ()
{: #ExactTarget aria-label='Methods' }
#### boolean :ExactTarget ()
{: aria-label='Methods' }

___
### FindSlot ()
{: #FindSlot aria-label='Methods' }
#### [Slot](../Hyperspace/Slot) :FindSlot (integer roomId, integer slotId, boolean closeEnough)
{: aria-label='Methods' }

___
### FireFightingSoundEffect ()
{: #FireFightingSoundEffect aria-label='Methods' }
#### boolean :FireFightingSoundEffect ()
{: aria-label='Methods' }

___
### ForceMindControl ()
{: #ForceMindControl aria-label='Methods' }
#### void :ForceMindControl (boolean force)
{: aria-label='Methods' }

___
### Functional ()
{: #Functional aria-label='Methods' }
#### boolean :Functional ()
{: aria-label='Methods' }

___
### GetControllable ()
{: #GetControllable aria-label='Methods' }
#### boolean :GetControllable ()
{: aria-label='Methods' }

___
### GetDamageMultiplier ()
{: #GetDamageMultiplier aria-label='Methods' }
#### number :GetDamageMultiplier ()
{: aria-label='Methods' }

___
### GetFinalGoal ()
{: #GetFinalGoal aria-label='Methods' }
#### [Point](../Hyperspace/Point) :GetFinalGoal ()
{: aria-label='Methods' }

___
### GetFireRepairMultiplier ()
{: #GetFireRepairMultiplier aria-label='Methods' }
#### number :GetFireRepairMultiplier ()
{: aria-label='Methods' }

___
### GetIntegerHealth ()
{: #GetIntegerHealth aria-label='Methods' }
#### integer :GetIntegerHealth ()
{: aria-label='Methods' }

___
### GetIntruder ()
{: #GetIntruder aria-label='Methods' }
#### boolean :GetIntruder ()
{: aria-label='Methods' }

___
### GetLocation ()
{: #GetLocation aria-label='Methods' }
#### [Point](../Hyperspace/Point) :GetLocation ()
{: aria-label='Methods' }

___
### GetLongName ()
{: #GetLongName aria-label='Methods' }
#### string :GetLongName ()
{: aria-label='Methods' }

___
### GetMaxHealth ()
{: #GetMaxHealth aria-label='Methods' }
#### integer :GetMaxHealth ()
{: aria-label='Methods' }

___
### GetMoveSpeed ()
{: #GetMoveSpeed aria-label='Methods' }
#### number :GetMoveSpeed ()
{: aria-label='Methods' }

___
### GetMoveSpeedMultiplier ()
{: #GetMoveSpeedMultiplier aria-label='Methods' }
#### number :GetMoveSpeedMultiplier ()
{: aria-label='Methods' }

___
### GetName ()
{: #GetName aria-label='Methods' }
#### string :GetName ()
{: aria-label='Methods' }

___
### GetNewGoal ()
{: #GetNewGoal aria-label='Methods' }
#### boolean :GetNewGoal ()
{: aria-label='Methods' }

___
### GetNextGoal ()
{: #GetNextGoal aria-label='Methods' }
#### [Point](../Hyperspace/Point) :GetNextGoal ()
{: aria-label='Methods' }

___
### GetPosition ()
{: #GetPosition aria-label='Methods' }
#### [Point](../Hyperspace/Point) :GetPosition ()
{: aria-label='Methods' }

___
### GetPowerCooldown ()
{: #GetPowerCooldown aria-label='Methods' }
#### pair\<number, number\> :GetPowerCooldown ()
{: aria-label='Methods' }

___
### GetPriority ()
{: #GetPriority aria-label='Methods' }
#### integer :GetPriority ()
{: aria-label='Methods' }

___
### GetRepairSpeed ()
{: #GetRepairSpeed aria-label='Methods' }
#### number :GetRepairSpeed ()
{: aria-label='Methods' }

___
### GetRepairingId ()
{: #GetRepairingId aria-label='Methods' }
#### integer :GetRepairingId ()
{: aria-label='Methods' }

___
### GetResisted ()
{: #GetResisted aria-label='Methods' }
#### boolean :GetResisted ()
{: aria-label='Methods' }

___
### GetRoomDamage ()
{: #GetRoomDamage aria-label='Methods' }
#### [Damage](../Hyperspace/Damage) :GetRoomDamage ()
{: aria-label='Methods' }

___
### GetSavedPosition ()
{: #GetSavedPosition aria-label='Methods' }
#### [Slot](../Hyperspace/Slot) :GetSavedPosition ()
{: aria-label='Methods' }

___
### GetSkillLevel ()
{: #GetSkillLevel aria-label='Methods' }
#### integer :GetSkillLevel (integer skillId)
{: aria-label='Methods' }

___
### GetSkillModifier ()
{: #GetSkillModifier aria-label='Methods' }
#### number :GetSkillModifier (integer skillId)
{: aria-label='Methods' }

___
### GetSkillProgress ()
{: #GetSkillProgress aria-label='Methods' }
#### pair\<integer, integer\> :GetSkillProgress (integer skillId)
{: aria-label='Methods' }

___
### GetSpecies ()
{: #GetSpecies aria-label='Methods' }
#### string :GetSpecies ()
{: aria-label='Methods' }

___
### GetSuffocationMultiplier ()
{: #GetSuffocationMultiplier aria-label='Methods' }
#### number :GetSuffocationMultiplier ()
{: aria-label='Methods' }

___
### GetTooltip ()
{: #GetTooltip aria-label='Methods' }
#### string :GetTooltip ()
{: aria-label='Methods' }

___
### GetUniqueRepairing ()
{: #GetUniqueRepairing aria-label='Methods' }
#### string :GetUniqueRepairing ()
{: aria-label='Methods' }

___
### HasSpecialPower ()
{: #HasSpecialPower aria-label='Methods' }
#### boolean :HasSpecialPower ()
{: aria-label='Methods' }

___
### IncreaseSkill ()
{: #IncreaseSkill aria-label='Methods' }
#### void :IncreaseSkill (integer skillId)
{: aria-label='Methods' }

___
### InitializeSkills ()
{: #InitializeSkills aria-label='Methods' }
#### void :InitializeSkills ()
{: aria-label='Methods' }

___
### InsideRoom ()
{: #InsideRoom aria-label='Methods' }
#### boolean :InsideRoom (integer roomId)
{: aria-label='Methods' }

___
### IsAnaerobic ()
{: #IsAnaerobic aria-label='Methods' }
#### boolean :IsAnaerobic ()
{: aria-label='Methods' }

___
### IsBusy ()
{: #IsBusy aria-label='Methods' }
#### boolean :IsBusy ()
{: aria-label='Methods' }

___
### IsCloned ()
{: #IsCloned aria-label='Methods' }
#### boolean :IsCloned ()
{: aria-label='Methods' }

___
### IsCrew ()
{: #IsCrew aria-label='Methods' }
#### boolean :IsCrew ()
{: aria-label='Methods' }

___
### IsDead ()
{: #IsDead aria-label='Methods' }
#### boolean :IsDead ()
{: aria-label='Methods' }

___
### IsDrone ()
{: #IsDrone aria-label='Methods' }
#### boolean :IsDrone ()
{: aria-label='Methods' }

___
### IsManningArtillery ()
{: #IsManningArtillery aria-label='Methods' }
#### boolean :IsManningArtillery ()
{: aria-label='Methods' }

___
### IsTelepathic ()
{: #IsTelepathic aria-label='Methods' }
#### boolean :IsTelepathic ()
{: aria-label='Methods' }

___
### Jump ()
{: #Jump aria-label='Methods' }
#### void :Jump ()
{: aria-label='Methods' }

___
### Kill ()
{: #Kill aria-label='Methods' }
#### void :Kill (boolean noClone)
{: aria-label='Methods' }

___
### LoadState ()
{: #LoadState aria-label='Methods' }
#### void :LoadState (integer fileHelper)
{: aria-label='Methods' }

___
### MasterSkill ()
{: #MasterSkill aria-label='Methods' }
#### void :MasterSkill (integer skillId)
{: aria-label='Methods' }

___
### ModifyHealth ()
{: #ModifyHealth aria-label='Methods' }
#### void :ModifyHealth (number health)
{: aria-label='Methods' }

___
### MoveToRoom ()
{: #MoveToRoom aria-label='Methods' }
#### boolean :MoveToRoom (integer roomId, integer slotId, boolean forceMove)
{: aria-label='Methods' }

___
### MultiShots ()
{: #MultiShots aria-label='Methods' }
#### boolean :MultiShots ()
{: aria-label='Methods' }

___
### NeedFrozenLocation ()
{: #NeedFrozenLocation aria-label='Methods' }
#### boolean :NeedFrozenLocation ()
{: aria-label='Methods' }

___
### NeedsSlot ()
{: #NeedsSlot aria-label='Methods' }
#### boolean :NeedsSlot ()
{: aria-label='Methods' }

___
### OnInit ()
{: #OnInit aria-label='Methods' }
#### boolean :OnInit ()
{: aria-label='Methods' }

___
### OnLoop ()
{: #OnLoop aria-label='Methods' }
#### void :OnLoop ()
{: aria-label='Methods' }

___
### OnRender ()
{: #OnRender aria-label='Methods' }
#### void :OnRender (boolean outlineOnly)
{: aria-label='Methods' }

___
### OnRenderHealth ()
{: #OnRenderHealth aria-label='Methods' }
#### void :OnRenderHealth ()
{: aria-label='Methods' }

___
### OnRenderPath ()
{: #OnRenderPath aria-label='Methods' }
#### void :OnRenderPath ()
{: aria-label='Methods' }

___
### OutOfGame ()
{: #OutOfGame aria-label='Methods' }
#### boolean :OutOfGame ()
{: aria-label='Methods' }

___
### PermanentDeath ()
{: #PermanentDeath aria-label='Methods' }
#### boolean :PermanentDeath ()
{: aria-label='Methods' }

___
### PositionShift ()
{: #PositionShift aria-label='Methods' }
#### number :PositionShift ()
{: aria-label='Methods' }

___
### PowerReady ()
{: #PowerReady aria-label='Methods' }
#### boolean :PowerReady ()
{: aria-label='Methods' }

___
### ProvidesPower ()
{: #ProvidesPower aria-label='Methods' }
#### boolean :ProvidesPower ()
{: aria-label='Methods' }

___
### ProvidesVision ()
{: #ProvidesVision aria-label='Methods' }
#### boolean :ProvidesVision ()
{: aria-label='Methods' }

___
### ReadyToFight ()
{: #ReadyToFight aria-label='Methods' }
#### boolean :ReadyToFight ()
{: aria-label='Methods' }

___
### RenderSkillUpAnimation ()
{: #RenderSkillUpAnimation aria-label='Methods' }
#### void :RenderSkillUpAnimation ([Point](../Hyperspace/Point) pos)
{: aria-label='Methods' }

___
### Repairing ()
{: #Repairing aria-label='Methods' }
#### boolean :Repairing ()
{: aria-label='Methods' }

___
### RepairingFire ()
{: #RepairingFire aria-label='Methods' }
#### boolean :RepairingFire ()
{: aria-label='Methods' }

___
### RepairingSystem ()
{: #RepairingSystem aria-label='Methods' }
#### boolean :RepairingSystem ()
{: aria-label='Methods' }

___
### ResetPower ()
{: #ResetPower aria-label='Methods' }
#### void :ResetPower ()
{: aria-label='Methods' }

___
### Restart ()
{: #Restart aria-label='Methods' }
#### void :Restart ()
{: aria-label='Methods' }

___
### RestorePosition ()
{: #RestorePosition aria-label='Methods' }
#### boolean :RestorePosition ()
{: aria-label='Methods' }

___
### Sabotaging ()
{: #Sabotaging aria-label='Methods' }
#### boolean :Sabotaging ()
{: aria-label='Methods' }

___
### SavePosition ()
{: #SavePosition aria-label='Methods' }
#### void :SavePosition ()
{: aria-label='Methods' }

___
### SaveState ()
{: #SaveState aria-label='Methods' }
#### void :SaveState (integer fileHelper)
{: aria-label='Methods' }

___
### SelectSabotageTarget ()
{: #SelectSabotageTarget aria-label='Methods' }
#### [Pointf](../Hyperspace/Pointf) :SelectSabotageTarget ()
{: aria-label='Methods' }

___
### SetCloneReady ()
{: #SetCloneReady aria-label='Methods' }
#### void :SetCloneReady (boolean cloneReady)
{: aria-label='Methods' }

___
### SetCurrentShip ()
{: #SetCurrentShip aria-label='Methods' }
#### void :SetCurrentShip (integer shipId)
{: aria-label='Methods' }

___
### SetCurrentSystem ()
{: #SetCurrentSystem aria-label='Methods' }
#### void :SetCurrentSystem ([ShipSystem](../Hyperspace/ShipSystem) sys)
{: aria-label='Methods' }

___
### SetCurrentTarget ()
{: #SetCurrentTarget aria-label='Methods' }
#### void :SetCurrentTarget ([StatBoostDefinition.CrewTarget](../Hyperspace/StatBoostDefinition.CrewTarget) target, boolean unk)
{: aria-label='Methods' }

___
### SetDamageBoost ()
{: #SetDamageBoost aria-label='Methods' }
#### void :SetDamageBoost (number damageBoost)
{: aria-label='Methods' }

___
### SetDeathNumber ()
{: #SetDeathNumber aria-label='Methods' }
#### void :SetDeathNumber (integer deathNum)
{: aria-label='Methods' }

___
### SetFrozen ()
{: #SetFrozen aria-label='Methods' }
#### void :SetFrozen (boolean frozen)
{: aria-label='Methods' }

___
### SetFrozenLocation ()
{: #SetFrozenLocation aria-label='Methods' }
#### void :SetFrozenLocation (boolean frozenLocation)
{: aria-label='Methods' }

___
### SetHealthBoost ()
{: #SetHealthBoost aria-label='Methods' }
#### void :SetHealthBoost (integer healthBoost)
{: aria-label='Methods' }

___
### SetMedbay ()
{: #SetMedbay aria-label='Methods' }
#### void :SetMedbay (number health)
{: aria-label='Methods' }

___
### SetMindControl ()
{: #SetMindControl aria-label='Methods' }
#### void :SetMindControl (boolean controlled)
{: aria-label='Methods' }

___
### SetName ()
{: #SetName aria-label='Methods' }
#### void :SetName ([TextString](../Hyperspace/TextString) name, boolean force)
{: aria-label='Methods' }

___
### SetOutOfGame ()
{: #SetOutOfGame aria-label='Methods' }
#### void :SetOutOfGame ()
{: aria-label='Methods' }

___
### SetPath ()
{: #SetPath aria-label='Methods' }
#### boolean :SetPath (Path path)
{: aria-label='Methods' }

___
### SetPosition ()
{: #SetPosition aria-label='Methods' }
#### void :SetPosition ([Point](../Hyperspace/Point) pos)
{: aria-label='Methods' }

___
### SetResisted ()
{: #SetResisted aria-label='Methods' }
#### void :SetResisted (boolean resisted)
{: aria-label='Methods' }

___
### SetRoom ()
{: #SetRoom aria-label='Methods' }
#### void :SetRoom (integer roomId)
{: aria-label='Methods' }

___
### SetRoomPath ()
{: #SetRoomPath aria-label='Methods' }
#### void :SetRoomPath (integer slotId, integer roomId)
{: aria-label='Methods' }

___
### SetSavePosition ()
{: #SetSavePosition aria-label='Methods' }
#### void :SetSavePosition ([Slot](../Hyperspace/Slot) position)
{: aria-label='Methods' }

___
### SetSex ()
{: #SetSex aria-label='Methods' }
#### void :SetSex (boolean male)
{: aria-label='Methods' }

___
### SetSkillProgress ()
{: #SetSkillProgress aria-label='Methods' }
#### void :SetSkillProgress (integer skillId, integer skillLevel)
{: aria-label='Methods' }

___
### SetTask ()
{: #SetTask aria-label='Methods' }
#### void :SetTask (CrewTask task)
{: aria-label='Methods' }

___
### ShipDamage ()
{: #ShipDamage aria-label='Methods' }
#### boolean :ShipDamage (number damage)
{: aria-label='Methods' }

___
### StartRepair ()
{: #StartRepair aria-label='Methods' }
#### void :StartRepair ([Repairable](../Hyperspace/Repairable) toRepair)
{: aria-label='Methods' }

___
### StartTeleport ()
{: #StartTeleport aria-label='Methods' }
#### void :StartTeleport ()
{: aria-label='Methods' }

___
### StartTeleportArrive ()
{: #StartTeleportArrive aria-label='Methods' }
#### void :StartTeleportArrive ()
{: aria-label='Methods' }

___
### StopRepairing ()
{: #StopRepairing aria-label='Methods' }
#### void :StopRepairing ()
{: aria-label='Methods' }

___
### UpdateHealth ()
{: #UpdateHealth aria-label='Methods' }
#### void :UpdateHealth ()
{: aria-label='Methods' }

___
### UpdateMovement ()
{: #UpdateMovement aria-label='Methods' }
#### void :UpdateMovement ()
{: aria-label='Methods' }

___
### UpdateRepair ()
{: #UpdateRepair aria-label='Methods' }
#### void :UpdateRepair ()
{: aria-label='Methods' }

___
### ValidTarget ()
{: #ValidTarget aria-label='Methods' }
#### boolean :ValidTarget (integer unk)
{: aria-label='Methods' }

___
### WithinRect ()
{: #WithinRect aria-label='Methods' }
#### boolean :WithinRect (integer x, integer y, integer w, integer h)
{: aria-label='Methods' }

___


## Fields
{: #Fields .section}
### bActiveManning
{: #bActiveManning aria-label='Fields' }
#### boolean .bActiveManning
{: aria-label='Fields' }

___
### bCloned
{: #bCloned aria-label='Fields' }
#### boolean .bCloned
{: aria-label='Fields' }

___
### bDead
{: #bDead aria-label='Fields' }
#### boolean .bDead
{: aria-label='Fields' }

___
### bFighting
{: #bFighting aria-label='Fields' }
#### boolean .bFighting
{: aria-label='Fields' }

___
### bFrozen
{: #bFrozen aria-label='Fields' }
#### boolean .bFrozen
{: aria-label='Fields' }

___
### bFrozenLocation
{: #bFrozenLocation aria-label='Fields' }
#### boolean .bFrozenLocation
{: aria-label='Fields' }

___
### bMindControlled
{: #bMindControlled aria-label='Fields' }
#### boolean .bMindControlled
{: aria-label='Fields' }

___
### bOutOfGame
{: #bOutOfGame aria-label='Fields' }
#### boolean .bOutOfGame
{: aria-label='Fields' }

___
### bResisted
{: #bResisted aria-label='Fields' }
#### boolean .bResisted
{: aria-label='Fields' }

___
### bSharedSpot
{: #bSharedSpot aria-label='Fields' }
#### boolean .bSharedSpot
{: aria-label='Fields' }

___
### bSuffocating
{: #bSuffocating aria-label='Fields' }
#### boolean .bSuffocating
{: aria-label='Fields' }

___
### blockingDoor
{: #blockingDoor aria-label='Fields' }
#### [Door](../Hyperspace/Door) .blockingDoor
{: aria-label='Fields' }

___
### blueprint
{: #blueprint aria-label='Fields' }
#### [CrewBlueprint](../Hyperspace/CrewBlueprint) .blueprint
{: aria-label='Fields' }

___
### boardingGoal
{: #boardingGoal aria-label='Fields' }
#### BoardingGoal .boardingGoal
{: aria-label='Fields' }

___
### clone_ready
{: #clone_ready aria-label='Fields' }
#### boolean .clone_ready
{: aria-label='Fields' }

___
### crewAnim
{: #crewAnim aria-label='Fields' }
#### [CrewAnimation](../Hyperspace/CrewAnimation) .crewAnim
{: aria-label='Fields' }

___
### crewTarget
{: #crewTarget aria-label='Fields' }
#### [StatBoostDefinition.CrewTarget](../Hyperspace/StatBoostDefinition.CrewTarget) .crewTarget
{: aria-label='Fields' }

___
### currentRepair
{: #currentRepair aria-label='Fields' }
#### [Repairable](../Hyperspace/Repairable) .currentRepair
{: aria-label='Fields' }

___
### currentShipId
{: #currentShipId aria-label='Fields' }
#### integer .currentShipId
{: aria-label='Fields' }

___
### currentSlot
{: #currentSlot aria-label='Fields' }
#### [Slot](../Hyperspace/Slot) .currentSlot
{: aria-label='Fields' }

___
### currentSystem
{: #currentSystem aria-label='Fields' }
#### [ShipSystem](../Hyperspace/ShipSystem) .currentSystem
{: aria-label='Fields' }

___
### currentTarget
{: #currentTarget aria-label='Fields' }
#### [Pointf](../Hyperspace/Pointf) .currentTarget
{: aria-label='Fields' }

___
### extend (Read-only)
{: #extend aria-label='Fields' }
#### [CrewMember_Extend](../Hyperspace/CrewMember_Extend) .extend
{: aria-label='Fields' }

___
### fCloneDying
{: #fCloneDying aria-label='Fields' }
#### number .fCloneDying
{: aria-label='Fields' }

___
### fMedbay
{: #fMedbay aria-label='Fields' }
#### number .fMedbay
{: aria-label='Fields' }

___
### fMindDamageBoost
{: #fMindDamageBoost aria-label='Fields' }
#### number .fMindDamageBoost
{: aria-label='Fields' }

___
### fStunTime
{: #fStunTime aria-label='Fields' }
#### number .fStunTime
{: aria-label='Fields' }

___
### finalGoal
{: #finalGoal aria-label='Fields' }
#### [Slot](../Hyperspace/Slot) .finalGoal
{: aria-label='Fields' }

___
### flashHealthTracker
{: #flashHealthTracker aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .flashHealthTracker
{: aria-label='Fields' }

___
### goal_x
{: #goal_x aria-label='Fields' }
#### number .goal_x
{: aria-label='Fields' }

___
### goal_y
{: #goal_y aria-label='Fields' }
#### number .goal_y
{: aria-label='Fields' }

___
### healing
{: #healing aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .healing
{: aria-label='Fields' }

___
### health
{: #health aria-label='Fields' }
#### pair\<number, number\> .health
{: aria-label='Fields' }

___
### healthBar
{: #healthBar aria-label='Fields' }
#### CachedRect .healthBar
{: aria-label='Fields' }

___
### healthBoost
{: #healthBoost aria-label='Fields' }
#### integer .healthBoost
{: aria-label='Fields' }

___
### healthBox
{: #healthBox aria-label='Fields' }
#### CachedImage .healthBox
{: aria-label='Fields' }

___
### healthBoxRed
{: #healthBoxRed aria-label='Fields' }
#### CachedImage .healthBoxRed
{: aria-label='Fields' }

___
### height
{: #height aria-label='Fields' }
#### integer .height
{: aria-label='Fields' }

___
### iDeathNumber
{: #iDeathNumber aria-label='Fields' }
#### integer .iDeathNumber
{: aria-label='Fields' }

___
### iManningId
{: #iManningId aria-label='Fields' }
#### integer .iManningId
{: aria-label='Fields' }

___
### iOnFire
{: #iOnFire aria-label='Fields' }
#### integer .iOnFire
{: aria-label='Fields' }

___
### iRepairId
{: #iRepairId aria-label='Fields' }
#### integer .iRepairId
{: aria-label='Fields' }

___
### iRoomId
{: #iRoomId aria-label='Fields' }
#### integer .iRoomId
{: aria-label='Fields' }

___
### iShipId
{: #iShipId aria-label='Fields' }
#### integer .iShipId
{: aria-label='Fields' }

___
### iStackId
{: #iStackId aria-label='Fields' }
#### integer .iStackId
{: aria-label='Fields' }

___
### intruder
{: #intruder aria-label='Fields' }
#### boolean .intruder
{: aria-label='Fields' }

___
### lastDamageTimer
{: #lastDamageTimer aria-label='Fields' }
#### number .lastDamageTimer
{: aria-label='Fields' }

___
### lastHealthChange
{: #lastHealthChange aria-label='Fields' }
#### number .lastHealthChange
{: aria-label='Fields' }

___
### lastLevelUp
{: #lastLevelUp aria-label='Fields' }
#### integer .lastLevelUp
{: aria-label='Fields' }

___
### last_door
{: #last_door aria-label='Fields' }
#### [Door](../Hyperspace/Door) .last_door
{: aria-label='Fields' }

___
### levelUp
{: #levelUp aria-label='Fields' }
#### [AnimationTracker](../Hyperspace/AnimationTracker) .levelUp
{: aria-label='Fields' }

___
### mindControlled
{: #mindControlled aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .mindControlled
{: aria-label='Fields' }

___
### moveGoal
{: #moveGoal aria-label='Fields' }
#### integer .moveGoal
{: aria-label='Fields' }

___
### movementTarget
{: #movementTarget aria-label='Fields' }
#### CachedImage .movementTarget
{: aria-label='Fields' }

___
### new_path
{: #new_path aria-label='Fields' }
#### boolean .new_path
{: aria-label='Fields' }

___
### path
{: #path aria-label='Fields' }
#### Path .path
{: aria-label='Fields' }

___
### savedPosition
{: #savedPosition aria-label='Fields' }
#### [Slot](../Hyperspace/Slot) .savedPosition
{: aria-label='Fields' }

___
### scale
{: #scale aria-label='Fields' }
#### number .scale
{: aria-label='Fields' }

___
### selectionImage
{: #selectionImage aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .selectionImage
{: aria-label='Fields' }

___
### selectionState
{: #selectionState aria-label='Fields' }
#### integer .selectionState
{: aria-label='Fields' }

___
### ship
{: #ship aria-label='Fields' }
#### [Ship](../Hyperspace/Ship) .ship
{: aria-label='Fields' }

___
### size
{: #size aria-label='Fields' }
#### number .size
{: aria-label='Fields' }

___
### skillUp
{: #skillUp aria-label='Fields' }
#### vector\<vector\<[AnimationTracker](../Hyperspace/AnimationTracker)\>\> .skillUp
{: aria-label='Fields' }

___
### skillsEarned
{: #skillsEarned aria-label='Fields' }
#### vector\<vector\<boolean\>\> .skillsEarned
{: aria-label='Fields' }

___
### species
{: #species aria-label='Fields' }
#### string .species
{: aria-label='Fields' }

___
### speed_x
{: #speed_x aria-label='Fields' }
#### number .speed_x
{: aria-label='Fields' }

___
### speed_y
{: #speed_y aria-label='Fields' }
#### number .speed_y
{: aria-label='Fields' }

___
### stats
{: #stats aria-label='Fields' }
#### [SCrewStats](../Hyperspace/SCrewStats) .stats
{: aria-label='Fields' }

___
### stunIcon
{: #stunIcon aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .stunIcon
{: aria-label='Fields' }

___
### stunned
{: #stunned aria-label='Fields' }
#### [Animation](../Hyperspace/Animation) .stunned
{: aria-label='Fields' }

___
### task
{: #task aria-label='Fields' }
#### CrewTask .task
{: aria-label='Fields' }

___
### type
{: #type aria-label='Fields' }
#### string .type
{: aria-label='Fields' }

___
### usingSkill
{: #usingSkill aria-label='Fields' }
#### integer .usingSkill
{: aria-label='Fields' }

___
### width
{: #width aria-label='Fields' }
#### integer .width
{: aria-label='Fields' }

___
### x (Read-only)
{: #x aria-label='Fields' }
#### number .x
{: aria-label='Fields' }
**read-only**

___
### x_destination
{: #x_destination aria-label='Fields' }
#### number .x_destination
{: aria-label='Fields' }

___
### y (Read-only)
{: #y aria-label='Fields' }
#### number .y
{: aria-label='Fields' }
**read-only**

___
### y_destination
{: #y_destination aria-label='Fields' }
#### number .y_destination
{: aria-label='Fields' }

___
